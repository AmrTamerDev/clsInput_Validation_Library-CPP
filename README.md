# 📌 C++ Input Validation Library (clsInputValidate) ⚡

A lightweight and efficient C++ utility class designed to validate user input, ensuring data integrity and seamless error handling. This library provides robust number and date validation functions for console applications. 🚀  

---

## 🌟 Project Overview  
The **clsInputValidate** class helps developers ensure that user input meets required constraints, preventing invalid entries and enhancing program reliability. It includes functionalities such as:  

✔️ **Numeric validation**: Ensures input falls within a valid range.  
✔️ **Date validation**: Checks if a date is valid and falls within a given range.  
✔️ **User input handling**: Reads and processes numbers and strings safely.  
✔️ **Error handling**: Prevents incorrect inputs and prompts re-entry.  

This class is designed for **C++ console-based applications** that require user input validation.  

---

## ✨ Features  

### 🔢 Numeric Validation  
✅ `IsNumberBetween(Number, From, To)`: Checks if a number is within a specified range.  
✅ `ReadNumber<T>()`: Reads a number from user input and ensures validity.  
✅ `ReadNumberBetween<T>(From, To)`: Reads a number and validates it against a given range.  

### 📅 Date Validation  
✅ `IsDateBetween(Date, DateFrom, DateTo)`: Verifies if a date is within a given range.  
✅ `IsValidDate(Date)`: Ensures that a given date is valid.  

### 🖊️ User Input Handling  
✅ `ReadShortNumber()`: Reads a **short** value from the user.  
✅ `ReadIntNumber()`: Reads an **int** value from the user.  
✅ `ReadFloatNumber()`: Reads a **float** value from the user.  
✅ `ReadDoubleNumber()`: Reads a **double** value from the user.  
✅ `ReadString()`: Reads and returns a **string** input from the user.  

---

## 🚀 How It Works  

### 🔹 Numeric Validation  
- Uses **template functions** for flexible number validation.  
- Ensures numbers fall within a valid range before returning them.  

### 🔹 User Input Handling  
- Uses `cin`, `cin.clear()`, and `cin.ignore()` to manage incorrect inputs.  
- Prevents crashes by properly handling **invalid input formats**.  

### 🔹 Date Handling  
- Utilizes the **clsDate** class to compare and validate date values.  
- Allows date range validation by checking if a date is between two others.  

---

## 📚 Potential Enhancements  

🛠 **Extended Error Handling**: More detailed error messages for invalid input cases.  
🗄 **Logging Support**: Store incorrect attempts for debugging or analytics.  
🔄 **Customizable Validation Rules**: Allow developers to define custom validation rules dynamically.  
🌎 **Localization Support**: Multi-language error messages for international applications.  

---

## ⚙️ Technologies Used  

- **Language**: C++  
- **Concepts**: Template functions, Input handling, Error validation  
- **Libraries**: `<iostream>`, `<string>`, `<limits>`  

---

## 🎯 Learning Outcomes  

✔️ **Robust input validation techniques**  
✔️ **Template function usage for flexible validation**  
✔️ **Error handling** using input clearing and ignoring methods  
✔️ **Date validation** with structured logic  
✔️ **Efficient and reusable C++ code**  

---

## 🛠 Installation & Usage  

### 📥 Clone the Repository  
```sh
git clone https://github.com/AmrTamerDev/clsInput_Validation_Library-CPP.git
cd clsInput_Validation_Library-CPP
## 📜 License  
This project is open-source. Feel free to fork, modify, and use it in your own C++ applications! 🎉  

---

## 🤝 Contributions  
Contributions are welcome! If you have improvements or additional features to add, submit a **Pull Request** 🚀
