# ✨️ C++ Programs (Basic to Advanced Level) 🚀️

## 💻️ Local Environment Setup
If you are still willing to set up your environment for C++, you need to have the following two softwares on your computer.

## 🗒️ Text Editor
This will be used to type your program. Examples of few editors include Windows Notepad, OS Edit command, Brief, Epsilon, EMACS, and vim or vi.

Name and version of text editor can vary on different operating systems. For example, Notepad will be used on Windows and vim or vi can be used on windows as well as Linux, or UNIX.

The files you create with your editor are called source files and for C++ they typically are named with the extension .cpp, .cp, or .c.

A text editor should be in place to start your C++ programming.

## 🖇️ C++ Compiler
This is an actual C++ compiler, which will be used to compile your source code into final executable program.

Most C++ compilers don't care what extension you give to your source code, but if you don't specify otherwise, many will use .cpp by default.

Most frequently used and free available compiler is GNU C/C++ compiler, otherwise you can have compilers either from HP or Solaris if you have the respective Operating Systems.

## 🌀️ Installing GNU C/C++ Compiler
### ⚔️ UNIX/Linux Installation
If you are using Linux or UNIX then check whether GCC is installed on your system by entering the following command from the command line −

<pre>$ g++ -v</pre>

If you have installed GCC, then it should print a message such as the following −

<pre>
Using built-in specs.
Target: i386-redhat-linux
Configured with: ../configure --prefix=/usr .......
Thread model: posix
gcc version 4.1.2 20080704 (Red Hat 4.1.2-46)
</pre>

If GCC is not installed, then you will have to install it yourself using the detailed instructions available at [GCC](https://gcc.gnu.org/install/)

### 🍎️ Mac OS X Installation
If you use Mac OS X, the easiest way to obtain GCC is to download the Xcode development environment from Apple's website and follow the simple installation instructions.

Xcode is currently available at [Apple Technology](developer.apple.com/technologies/tools/)

### 🌀️ Windows Installation
To install GCC at Windows you need to install MinGW. To install MinGW, go to the MinGW homepage, [Mingw](www.mingw.org), and follow the link to the MinGW download page. Download the latest version of the MinGW installation program which should be named MinGW-<version>.exe.

While installing MinGW, at a minimum, you must install gcc-core, gcc-g++, binutils, and the MinGW runtime, but you may wish to install more.

Add the bin subdirectory of your MinGW installation to your PATH environment variable so that you can specify these tools on the command line by their simple names.

When the installation is complete, you will be able to run gcc, g++, ar, ranlib, dlltool, and several other GNU tools from the Windows command line.
  
## ✌🏻️ Congratulations
You're ready to write your c++ programs.
  
Let us look at a simple code that would print the words Hello World.

<pre>
  #include <iostream>
using namespace std;

// main() is where program execution begins.
int main() {
   cout << "Hello World"; // prints Hello World
   return 0;
}
</pre>

## 👨🏻‍💻️ Compile and Execute C++ Program
Let's look at how to save the file, compile and run the program. Please follow the steps given below −

Open a text editor and add the code as above.

Save the file as: hello.cpp

Open a command prompt and go to the directory where you saved the file.

Type 'g++ hello.cpp' and press enter to compile your code. If there are no errors in your code the command prompt will take you to the next line and would generate a.out executable file.

Now, type 'a.out' to run your program.

You will be able to see ' Hello World ' printed on the window.
<pre>
$ g++ hello.cpp
$ ./a.out
Hello World
</pre>
Make sure that g++ is in your path and that you are running it in the directory containing file hello.cpp.

You can compile C/C++ programs using makefile. For more details, you can check our [Makefile Tutorial](https://www.tutorialspoint.com/makefile/index.htm).

