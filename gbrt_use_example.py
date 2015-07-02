#-*-utf-8-*-

import numpy as np
import matplotlib.pyplot as plt
from sklearn.tree import DecisionTreeRegressor

def ground_truth(x):
    return x * np.sin(x) + np.sin(2 * x) #这是一个复合的正弦函数

def gen_data(n_samples = 200):
    np.random.seed(13) #生成种子是干嘛的？
    x = np.random.uniform(0, 10, size = n_samples) 
    x.sort() #200个由小到大的0~10之间的随机数、服从均匀分布分布。x轴
    y = ground_truth(x) +0.75 * np.random.normal(size = n_samples)# y轴

    train_mask = np.random.randint(0,2,size = n_samples).astype(np.bool)
    ###astype在numpy中用于数据类型转换。但是这里用np.bool可能是有问题的？？？


    x_train, y_train = x[train_mask, np.newaxis],y[train_mask]
    x_test, y_test = x[~train_mask, np.newaxis], y[~train_mask]
    ### ~代表什么意思？
    return x_train, x_test, y_train, y_test

X_train, X_test, y_train, y_test = gen_data(200)

x_plot = np.linspace(0, 10, 500)
#推测来看应该是横轴
def plot_data(figsize = (8,5)):
    fig = plt.figure(figsize = figsize)
    gt = plt.plot(x_plot, ground_truth(x_plot), alpha = 0.4, label = 'groundtruth')
    ###alpha是干么的？
    plt.scatter(X_train, y_train, s = 10, alpha = 0.4)
    plt.scatter(X_test, y_test, s= 10, alpha = 0.4)
    plt.xlim((0,10))   ###xlim???\
    plt.ylabel('y')
    plt.xlabel('x')
    #plt.show()

plot_data(figsize = (8,5))

est = DecisionTreeRegressor(max_depth = 6).fit(X_train,y_train)
plt.plot(x_plot,est.predict(x_plot[:,np.newaxis]),label = 'RT max_depth = 3',color = 'g', alpha = 0.7, linewidth = 1)
plt.legend(loc = 'upper left')
plt.show()
    
