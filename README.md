# qt-args-and-sorting #

A random Qt application made by study purposes. Focused on command line argument parsing and sorting algorithms.

## Abstract ##

I've made this only for practicing:

 - C++ general syntax and features: Writing classes in separate .cpp and .h files, static class members, passing parameters as reference (in C++ this is slightly different from pointers).
 - Qt features: qDebug, command line options parsing.
 - Sorting algorithms: Bubble, Insertion and Merge.

## Compiling the source ##

 This project was made to be built with [qtCreator](https://www.qt.io/download). 
 There is in the internet plenty of good documentation and tutorials about setting up qtCreator and creating some projects, like [this](https://www.youtube.com/watch?v=QQDGb4AkY4c&t=1036s) (in pt-BR :)) for instance.
 
## Using the executable ##

If one type:

    ./qtSort -h

The program will show the help text, which is the following:

    Usage: ./qtSort [options]  
    ************************************************************************************  
    *                                     qtSort                                       *
    *                                                                                  *
    * Hi! I am just another random program to study sorting algorithms, C++ and Qt.    *
    * I use qDebug for some prints because i'm just a test program.                    *
    * For things that should really be shown to de user, it must be used std::cout!    *
    *                                                                                  *
    ************************************************************************************
    qtSort - v0.0 - https://github.com/Pancreax Helper  
      
    Options:  
    -h, --help Displays this help.  
    -v, --version Displays version information.  
    -s, --sorting-algorithm <Sorting Algorithm> Select the sorting algorithm.  
    Possibilities are:  
        bubble-sort  
        insertion-sort  
        merge-sort

And that is pretty much everything about it! Go ahead! Try out and have hours of fun!
        
## Todo ##

I still want to make an standalone directory with this project, maybe with [this](https://github.com/probonopd/linuxdeployqt), but i will have to work around their "The host system is too new" thing.
