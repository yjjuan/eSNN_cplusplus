# Exploring the basic properties of eSNN in C++
Evolving spiking neural network in C++

## My works:
* Apply OeSNN to data stream of two consecutive bearing
* Explore how different hyperparameters of SNN affect performance of SNN for anomaly detection. (in c++ jupyter notebook)
  * how many hyperparameters are there in eSNN?
* Embed the SNN into running app: detection the drift of my velocity.

## Milestones:
* 20200203: I have to turn window-based ReadDirectory into Linux-based one
* 20200214: Precision 0.00438116 Recall 1 fMeasure 0.0087241. Why precision is so low?. **Have to check the predictions w/ cout**
## Notes:
* syn w/ jupyter7788
* To compile w/ Cmake,
<br> mkdir build
cd build
cmake ..
make
* compile the main.cpp: g++ test_main2.cpp eSNN.cpp -o test_main2 -std=c++14

## Sources
* SNN in Pytorch [Link](https://medium.com/@martino.sorbaro/deep-learning-with-spiking-networks-optimising-energy-consumption-50588b4435fd); [Gitlab](https://gitlab.com/aiCTX/synoploss)
