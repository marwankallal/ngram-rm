# ngram-rm

Given a string and a bag of overlapping n-grams, remove all n-grams from the string.

## Overview

This algorithm and implementation are used to remove potentially variable-length and overlapping n-grams from a string. This algorithm is optimal for processing large amounts of strings with the same bag of n-grams because the n-grams undergo a preprocessing step to make string comparison and removal much faster.

There are two different implementations of this project: one in Python and one in C. The Python implementation allows for quick prototyping and integration into machine learning applications, while the C implementation takes full advantage of speed and memory control.

Both the C and Python versions are created as libraries and include individual tests in the `tests/` directory to benchmark a large dataset. Full documentation for building and using these libraries can be found in the `doc/` directory. Additionally, specific documentation describing the algorithm in detail is available in the `doc/` directory.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Installation

### Python

To install the Python version, follow these steps:

```sh
# Clone the repository
git clone https://github.com/your-username/ngram-rm.git
cd ngram-rm/python

# Create a virtual environment (optional but recommended)
python -m venv venv
source venv/bin/activate

# Install dependencies
pip install -r requirements.txt

```

# To install the C version, follow these steps:

# Clone the repository

git clone https://github.com/your-username/ngram-rm.git
cd ngram-rm/c

# Build the project

make

# Example Usage in python library

from ngram_rm import NgramRemover

# Define your string and n-grams

string = "your string here"
ngrams = ["ngram1", "ngram2"]

# Initialize the remover and process the string

remover = NgramRemover(ngrams)
cleaned_string = remover.remove_ngrams(string)

print(cleaned_string)

# Example usage in C library

#include "ngram_rm.h"

int main() {
char *string = "your string here";
char *ngrams[] = {"ngram1", "ngram2"};
int ngram_count = 2;

    char *cleaned_string = remove_ngrams(string, ngrams, ngram_count);

    printf("%s\n", cleaned_string);
    free(cleaned_string);

    return 0;

}

Features
Efficient removal of overlapping n-grams from strings
Preprocessing step for faster string comparison and removal
Implementations in both Python and C
Comprehensive tests and benchmarks
Contributing
We welcome contributions! To contribute, follow these steps:

Fork the repository
Create a new branch (git checkout -b feature/your-feature-name)
Commit your changes (git commit -m 'Add your feature')
Push to the branch (git push origin feature/your-feature-name)
Open a Pull Request
License
This project is licensed under the MIT License - see the LICENSE file for details.

Contact
For questions or support, please contact:

Email: your.email@example.com
GitHub: your-username
LinkedIn: your-profile

