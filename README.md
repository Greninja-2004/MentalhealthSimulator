# Mental Health Simulator

A simple C++ console application designed to help users track their mood, reflect on their feelings, and receive personalized activity suggestions. This simulator aims to provide a basic tool for self-reflection and encourages mindfulness about one's emotional state.

## Features

* **Mood Logging:** Users can log their current mood from a predefined list (Happy, Sad, Anxious, Neutral, Angry).
* **Mood Intensity:** Record the intensity of your mood on a scale of 1 to 5, allowing for more nuanced tracking.
* **Descriptive Entries:** Add an optional description to each mood entry, providing context for your feelings.
* **Timestamped Records:** Every mood entry is automatically timestamped for easy historical tracking.
* **Activity Suggestions:** Based on the logged mood, the application provides relevant and helpful activity suggestions to support mental well-being.
* **Mood History:** View a chronological list of all your past mood entries, including mood, intensity, timestamp, and description.

## How to Compile and Run

To compile and run this C++ application, you will need a C++ compiler (like g++).

### On Linux/macOS:

1.  **Save the code:** Save the provided C++ code into a file named `mental_health_simulator.cpp`.
2.  **Open a terminal:** Navigate to the directory where you saved the file.
3.  **Compile:** Use the g++ compiler to compile the code:
    ```bash
    g++ mental_health_simulator.cpp -o mental_health_simulator
    ```
4.  **Run:** Execute the compiled program:
    ```bash
    ./mental_health_simulator
    ```

### On Windows (using MinGW/g++):

1.  **Install MinGW:** If you don't have g++ installed, download and install MinGW from its official website. Make sure to add `mingw32-gcc-g++` package during installation and add MinGW's `bin` directory to your system's PATH environment variable.
2.  **Save the code:** Save the provided C++ code into a file named `mental_health_simulator.cpp`.
3.  **Open Command Prompt/PowerShell:** Navigate to the directory where you saved the file.
4.  **Compile:** Use the g++ compiler to compile the code:
    ```bash
    g++ mental_health_simulator.cpp -o mental_health_simulator.exe
    ```
5.  **Run:** Execute the compiled program:
    ```bash
    .\mental_health_simulator.exe
    ```

## Usage

Upon running the application, you will be presented with a simple menu:

1.  **Update Mood:** Allows you to enter your current mood and its intensity, along with an optional description.
2.  **View Mood History:** Displays all your previously logged mood entries.
3.  **Exit:** Quits the application.

Follow the on-screen prompts to navigate and interact with the simulator.

## Contributing

This project is a simple demonstration. Contributions, issues, and feature requests are welcome! Feel free to fork the repository and submit pull requests.

## License

This project is open-source and available under the [MIT License](LICENSE).

---

**Note:** This application is a basic tool for self-reflection and is not intended to be a substitute for professional mental health advice or treatment. If you are struggling with your mental health, please seek help from a qualified professional.
