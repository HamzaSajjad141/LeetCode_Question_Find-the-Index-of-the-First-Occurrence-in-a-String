# LeetCode Question: Find the Index of the First Occurrence in a String

This repository contains the solution code for the LeetCode question "Find the Index of the First Occurrence in a String."

## Problem Description

You are given two strings: `haystack` and `needle`. The task is to find the index of the first occurrence of the `needle` string in the `haystack` string. If the `needle` string is not part of the `haystack`, return `-1`.

## Solution

The solution for this problem is implemented in the `Solution` class. The `strStr` method takes two string arguments (`haystack` and `needle`) and returns the index of the first occurrence of `needle` in `haystack`, or `-1` if not found.

The algorithm works by iterating through the `haystack` string and comparing each substring of the same length as `needle`. If a match is found, the index is returned. If no match is found, `-1` is returned.

## Usage

To use the solution code, you can create an instance of the `Solution` class and call the `strStr` method with appropriate inputs.

## Contribution

Contributions to this repository are welcomed! If you encounter any issues, have suggestions for improvements, or want to add alternative solution approaches, please consider opening a pull request or an issue. Your contributions can help enhance the value of this repository for the community.

## License

This project is licensed under the [MIT License](LICENSE).

---

Feel free to clone this repository, contribute to it, or adapt the provided solution approach for your projects. If you come across any issues or have ideas for enhancements, don't hesitate to open a pull request or issue. Happy coding!
