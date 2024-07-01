<br />
<div align="center">
  <h1 align="center">ossd-mark-calculator</h3>

  <p align="center">
    Mark calculator for the Ontario Secondary School Diploma
    <br />
    <br />
    <a href="https://github.com/udontur/ossd-mark-calculator/issues?q=sort%3Aupdated-desc+is%3Aissue+is%3Aopen">Report Bug</a>
    ·
    <a href="https://github.com/udontur">Author</a>
  </p>
</div>

<!-- ABOUT THE PROJECT -->
## About The Project

Have you ever received your score and wondered what the final mark is, but it is not uploaded to your student information system? Or does Google Classroom not display your final mark? ossd-mark-calculator calculates your mark with speed and accuracy. 

It is built with C++, which is faster than most languages. The program avoids using decimals during its calculation, which produces 100% accurate results.  

If you find this helpful (thank you for using ossd-mark-calculator), [staring this repo](https://docs.github.com/en/get-started/exploring-projects-on-github/saving-repositories-with-stars) would help the author a lot!

## Getting started
### Method 1: Executable file (easier)

1. Download the [ossd-markcal.exe executable file](https://raw.githubusercontent.com/udontur/ossd-mark-calculator/main/ossd-markcal.exe)
3. A pop up should appear on the top left corner of the screen. 
    - If there are no pop ups, download it again, or check  ```C:\Users\<YOURUSERNAME>\Downloads```.
4. Click ```ossd-markcal.exe```.
5. Windows or MacOS will warn you about opening an executable file.
    - Windows: Click "More Info", then click "Run anyway".
    - MacOS: Click "Open".
6. A terminal will pop up, ossd-mark-calculator is good to go!

<a href="https://raw.githubusercontent.com/udontur/ossd-mark-calculator/main/ossd-markcal.exe" download="filename.extension">Download File</a>

### Method 2: Online compiler
1. Navigate to the [GDB Online Compiler](https://www.onlinegdb.com/).
2. Click the language drop-down in the top left of the website.
3. Select ```C++20```.
4. Remove the code located in the large code area.
5. Paste [this code](https://github.com/udontur/ossd-mark-calculator/blob/main/src/main.cpp) in the empty large code area.
6. Press ```F9``` on your keyboard.
7. Use the ossd-mark-calculator in the terminal at the website's bottom. ossd-mark-calculator is good to go!

## Usage
Press enter after you finish typing.
1. "Enter the number of items"
    - Type how many marks you want to enter.
2. "Enter the marks" (Limit: 4 decimal points)
    - Type your marks excluding the denominator, separated by a space.
    - For example: ```4 9.5 1000 99.332 20```.
3. "Enter the denominators" (Limit: 1 decimal point)
    - Type your denominators according to the order of the marks, separated by a space.
4. "Enter the weights" (Limit: 0 decimal points)
    - Type your weights according to the order of the marks, separated by a space  .  
5. Final marks
    - "Final Mark" displays your rounded off final mark.
    - "Exact Mark" displays your exact mark, rounded off to 3 decimal points.

## License

Distributed under the [MIT License](https://github.com/udontur/ossd-mark-calculator/blob/main/LICENSE). See [LICENSE](https://github.com/udontur/ossd-mark-calculator/blob/main/LICENSE) for more information.
