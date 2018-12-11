# mac-accessibility-features-check

Small node library for macOS that will allow you to check accessibility features permission for your application.

## Installation

```
$ npm install --save mac-accessibility-features-check
```

### Electron

If you're planning to use this with electron you MUST use [electron-rebuild](https://github.com/electron/electron-rebuild), otherwise it will crash during runtime.

Also it might not work with ASAR.

## Usage

```javascript
// It's a good idea to run these checks only for macOS:
if (process.platform === 'darwin') {
  const accessibilityCheck = require('mac-accessibility-features-check')

  accessibilityCheck.check() // => returns true/false
  accessibilityCheck.checkAndPrompt() // => returns true/false and prompts user to confirm it. Note: changes require application restart!
}
```

## License

```
Copyright (c) 2018, Andrey Viktorov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
