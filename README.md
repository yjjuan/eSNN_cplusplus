# Exploring the basic properties of eSNN in C++
Anomaly detection in time series w/ evolving spiking neural network

## My works:
* Apply OeSNN to data stream of two consecutive bearing
* Explore how different hyperparameters of SNN affect performance of SNN for anomaly detection. (in c++ jupyter notebook)
  * how many hyperparameters are there in eSNN?
* Embed the SNN into running app: detection the drift of my velocity. [Android sensor](https://developer.android.com/guide/topics/sensors/sensors_position)

## Milestones:
* 20200203: ~~I have to turn window-based ReadDirectory into Linux-based one~~
* 20200214: Precision 0.00438116 Recall 1 fMeasure 0.0087241. Why precision is so low?. **Have to check the predictions w/ cout**
* 20200228: ~~how to feed java arrayList to cpp function?~~
* 20200314: start to explore eSNN for drift detection.
* 20200328: eSNN is not effective to locate the drift. Found a good substitute: ADWIN.
![](/drift_detection/performance.png)
*

## Notes:
* syn w/ jupyter7788
* To compile w/ Cmake,
<br> mkdir build
<br> cd build
<br> cmake ..
<br> make
* compile the main.cpp: g++ test_main2.cpp eSNN.cpp -o test_main2 -std=c++14

## Sources
* SNN in Pytorch [Link](https://medium.com/@martino.sorbaro/deep-learning-with-spiking-networks-optimising-energy-consumption-50588b4435fd); [Gitlab](https://gitlab.com/aiCTX/synoploss)
* [Datasets for concept drift](https://www.cs.bham.ac.uk/~minkull/open-source.html); [documentation](https://ieeexplore.ieee.org/abstract/document/5156502)
* [Adapted from Piotr Maciag's github](https://github.com/piotrMaciag32/eSNN-AD)

## Reference:
* [Easy Outlier Detection in Data Streams](https://towardsdatascience.com/easy-outlier-detection-in-data-streams-3089bfefe528)
* [Medium post: Detecting real-time and unsupervised anomalies in streaming data: a starting point](https://towardsdatascience.com/detecting-real-time-and-unsupervised-anomalies-in-streaming-data-a-starting-point-760a4bacbdf8)
* [Liu, B., Qi, Y. & Chen, K.-J. Sequential online prediction in the presence of outliers and change points: an instant temporal structure learning approach.(2020)](https://arxiv.org/abs/1907.06377)
* [Introduction to online learning @ creme](https://creme-ml.github.io/notebooks/batch-to-online.html)
* Albert Bifet's work: [Github](https://github.com/abifet), [book](https://www.amazon.com/gp/product/0262037793/ref=as_li_tl?ie=UTF8&camp=1789&creative=9325&creativeASIN=0262037793&linkCode=as2&tag=moa06-20&linkId=b5e81a3c1ba8d10f01fdabac1c422bd0);[free book](https://www.cs.waikato.ac.nz/~abifet/MOA/StreamMining.pdf)
* [Deployment of online model](https://towardsdatascience.com/machine-learning-for-streaming-data-with-creme-dacf5fb469df)
