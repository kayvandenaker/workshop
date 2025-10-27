# NRF Util fix

If you get 

```
RuntimeError: Click will abort further execution because Python was configured to use ASCII as encoding for the environment. Consult https://click.palletsprojects.com/unicode-support/ for mitigation steps. Compilation error: exit status 1
```

Easiest fix is to use the old Arduino IDE, alternatively you can follow these steps:

1. Open a terminal
2. Install adafruit-nrfutil via pip3 → `pip3 install --user adafruit-nrfutil`
3. Add `~/.local/bin` to PATH → `echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.zshrc`
4. Reload your shell → `source ~/.zshrc`
5. Verify it works → `adafruit-nrfutil version`
7. Replace Arduino’s bundled version with this one → `find ~/Library/Arduino15/packages/adafruit/hardware/nrf52/* -name adafruit-nrfutil -exec ln -sf $(which adafruit-nrfutil) {} \;`
9. Confirm the link → `ls -l ~/Library/Arduino15/packages/adafruit/hardware/nrf52/*/tools/adafruit-nrfutil/macos/`, you should see `adafruit-nrfutil -> /Users/<you>/.local/bin/adafruit-nrfutil`
