# Competitive code

A repo containg some juicy CP code I'll be writing while starting to get into DSA. Hopefully I'll stay sane and keep my code formatter on so that i don't sin and write unredable code.

I've added launch config and stuff so that you dont have to painfully setup debugging and support in VS Code. BEWARE tho, I use _linux_ so you might wanna tweak files in `.vscode` folder for windows & mac. The testcases are stored in `.cph` folder.

Just create a file and you're good to go. Add test cases in CPH Judge and they're saved too for later use.

### Languages I'm using:

- C & C++

- Python

### Extentions used:

- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools): For C & C++ support and formatting

- [Python](https://marketplace.visualstudio.com/items?itemName=ms-python.python): For python support

- [Pylance](https://marketplace.visualstudio.com/items?itemName=ms-python.vscode-pylance): For python formatting

- [CPH Judge](https://marketplace.visualstudio.com/items?itemName=DivyanshuAgrawal.competitive-programming-helper): For running test cases automatically and saving them

## Some additional config for VS Code

You might wanna add the following in your `settings.json` file to language specific stuff.

```json
  "editor.wordWrapColumn": 140,
  "editor.formatOnSave": true,
  "python.languageServer": "Pylance",
  "[cpp]": {
    "editor.tabSize": 4,
    "editor.defaultFormatter": "ms-vscode.cpptools",
  },
  "[c]": {
    "editor.tabSize": 4,
    "editor.defaultFormatter": "ms-vscode.cpptools",
  },
  "[python]": {
    "gitlens.codeLens.symbolScopes": [
      "!Module"
    ],
    "editor.defaultFormatter": "ms-python.python"
  },
```

If you dont know how to open `settings.json` here ya go:

1. `CTRL + SHIFT + P`
2. Start typing `Preferences: Open Settings (JSON)`
3. Select the first option
