
# Set up

- Clone the repository
- Open the project directory in Visual Studio code
- Make sure C++ compiler such as g++ is installed
- Navigate to project directory


# Input/Output Contract

- User inputs "32 C", "59 F", ...
- Program reads input and converts to appropriate temperature
- Program outputs "XX C = XX F" or "XX F = XX C"
- Error message: "Invalid input"
- Celcius CANNOT be below "-273.15 C" => output "Cannot be below absolute zero"
- Fahreinheit CANNOT be below "-459.67 F" => output "Cannot be below absolute zero"
- Formula are:
  - F = C \* 9 / 5 + 32
  - C = (F - 32) \* 5 / 9


# Build and Test

- Compile the program using g++ src/main.cpp -o problem1
- Test converting 0 Celsius to Fahrenheit and from 32 Fahrenheit to Celsius

# Limitations

- Cannot go to or below absolute zero
- Can only receive numeric inputs
  
