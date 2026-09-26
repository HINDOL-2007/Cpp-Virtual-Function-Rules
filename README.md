# 🛡️ C++ Virtual Function Fallback Execution

## 📖 About the Project
This project validates the compiler rules governing Virtual Functions in C++. Specifically, it tests the fallback mechanism of Run-Time Polymorphism. When a base pointer invokes a virtual function on a derived object that lacks an override, the compiler safely defaults to the base class implementation.

## ✨ Features
*   **Fallback Execution:** Proves that missing derived implementations do not cause runtime crashes, but instead trigger the base class virtual function.
*   **Array of Base Pointers:** Iterates through a polymorphic array (`Weapon* armory[2]`), dynamically resolving function calls for different derived objects (`Sword` and `Bow`) in a single loop.
*   **Method Overriding:** Contrasts an overridden virtual function against an inherited default function at runtime.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Virtual Functions, Run-Time Polymorphism, Inheritance Chains, Fallback Execution, Array of Pointers.

## 🛠️ How to Run
1. Clone this repository and compile:
   ```bash
   g++ virtual_rules.cpp -o virtual_rules
