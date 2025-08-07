# Unit Converter (C)

This is a command-line program written in C that allows you to convert between different types of physical units: temperature, distance, pressure, weight, and volume. It is a simple and educational tool that demonstrates the use of control structures, functions, and input validation in C.

## Compilation

You can compile the program using `gcc`:

```bash
gcc converter.c -o converter
```

## Usage

After compiling, run the program from your terminal:

```python
./unit_converter
```

An interactive menu like this will appear:

<img width="372" height="190" alt="initial menu" src="https://github.com/user-attachments/assets/5a31f6c6-f673-4bd9-970e-29d9b5d2928f" />

After choosing the type of conversion, a submenu will appear with the available conversion options. For example, for temperature:

<img width="156" height="54" alt="temperature menu" src="https://github.com/user-attachments/assets/cbfa9f9b-391b-48dc-9a27-bdbdc13c6ecc" />

The program will ask you for a value to convert and will display the result.

## Features

- Temperature conversion: ºC ↔ ºF
- Distance conversion: km ↔ miles, m ↔ ft
- Pressure conversion: Pa ↔ atm
- Weight conversion: kg ↔ lb
- Volume conversion: L ↔ gal
- Conversion loop: repeat as many times as the user wants
- Input validation: handles invalid numbers and menu options gracefully

## Sample Output

<img width="428" height="380" alt="sample output" src="https://github.com/user-attachments/assets/f9cca0b6-bed4-4977-8669-0fe42a61bd7c" />

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License

[MIT](https://choosealicense.com/licenses/mit/)
