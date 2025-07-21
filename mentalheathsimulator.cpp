#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <limits>

using namespace std;

struct MoodEntry {
    string mood;
    int intensity;
    string timestamp;
    string description;
};

string getCurrentTime() {
    time_t now = time(0);
    string dt = ctime(&now);
    dt.pop_back();
    return dt;
}

void suggestActivity(const string& mood) {
    cout << "\nSuggested Activities:\n";
    if (mood == "Happy") {
        cout << "- Go for a walk and enjoy the sunshine!\n";
        cout << "- Share your positivity with a friend.\n";
        cout << "- Try a creative hobby like painting or writing.\n";
    } else if (mood == "Sad") {
        cout << "- Listen to uplifting music.\n";
        cout << "- Watch a comforting movie or read a favorite book.\n";
        cout << "- Talk to someone you trust about how you feel.\n";
    } else if (mood == "Anxious") {
        cout << "- Practice deep breathing or meditation (5-10 minutes).\n";
        cout << "- Write down your thoughts in a journal.\n";
        cout << "- Try light stretching or yoga.\n";
    } else if (mood == "Neutral") {
        cout << "- Take a moment to reflect on something you're grateful for.\n";
        cout << "- Try a new activity or hobby to spark interest.\n";
        cout << "- Connect with a friend or family member.\n";
    } else if (mood == "Angry") {
        cout << "- Take a few deep breaths to calm down.\n";
        cout << "- Engage in physical activity like jogging or a workout.\n";
        cout << "- Write down what's bothering you and take a break.\n";
    } else {
        cout << "- Relax and take some time for self-care.\n";
    }
}

void displayHistory(const vector<MoodEntry>& history) {
    if (history.empty()) {
        cout << "\nNo mood entries yet.\n";
        return;
    }
    cout << "\nMood History:\n";
    for (size_t i = 0; i < history.size(); ++i) {
        cout << i + 1 << ". Mood: " << history[i].mood
             << " (Intensity: " << history[i].intensity << ")"
             << ", Time: " << history[i].timestamp
             << ", Description: " << history[i].description << "\n";
    }
}

int main() {
    vector<MoodEntry> moodHistory;
    string mood, description;
    int choice;
    int intensity;

    cout << "Welcome to the Mental Health Simulator!\n";

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Update Mood\n";
        cout << "2. View Mood History\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 1) {
            cout << "\nHow are you feeling? (Happy, Sad, Anxious, Neutral, Angry): ";
            getline(cin, mood);
            if (!mood.empty()) {
                mood[0] = toupper(mood[0]);
                for (size_t i = 1; i < mood.length(); ++i) {
                    mood[i] = tolower(mood[i]);
                }
            }

            cout << "On a scale of 1 to 5, how intense is this mood? (1=Mild, 5=Very Intense): ";
            while (!(cin >> intensity) || intensity < 1 || intensity > 5) {
                cout << "Invalid input. Please enter a number between 1 and 5: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Describe why you feel this way (optional, press Enter to skip): ";
            getline(cin, description);

            MoodEntry entry = {mood, intensity, getCurrentTime(), description};
            moodHistory.push_back(entry);

            cout << "\nMood updated successfully!\n";
            suggestActivity(mood);
        }
        else if (choice == 2) {
            displayHistory(moodHistory);
        }
        else if (choice == 3) {
            cout << "\nThank you for using the Mental Health Simulator. Take care!\n";
            break;
        }
        else {
            cout << "\nInvalid choice. Please try again.\n";
        }
    }
    return 0;
}