# Backup script to save settings on MacOS

# Set App Launch Services
cp -Rf ~/Library/Services/Launch\ Activity\ Monitor.workflow services/
cp -Rf ~/Library/Services/Launch\ Browser.workflow services/
cp -Rf ~/Library/Services/Launch\ Terminal.workflow services/
cp -Rf ~/Library/Services/Launch\ Atom.workflow services/
cp -Rf ~/Library/Services/Launch\ System\ Preferences.workflow services/

# Set Run Commands files for vim bash lldb git
cp -f ~/.bash_profile .
cp -f ~/.vimrc .
cp -f ~/.lldbinit .
cp -f ~/.gitconfig .

# Global gitignore
cp -f ~/.gitignore_global .

# Set Atom Settings
cp -f ~/.atom/*.cson atom/
cp -f ~/.atom/*.less atom/

# Set System Preferences (available after logout + login)
cp -f ~/Library/Preferences/com.apple.Terminal.plist preferences/
cp -f ~/Library/Preferences/com.apple.dock.plist preferences/
cp -f ~/Library/Preferences/com.apple.finder.plist preferences/
cp -f ~/Library/Preferences/com.apple.systempreferences.plist preferences/
cp -f ~/Library/Preferences/com.github.atom.helper.plist preferences/
cp -f ~/Library/Preferences/com.github.atom.plist preferences/
cp -f ~/Library/Preferences/com.google.Chrome.plist preferences/
cp -f ~/Library/Preferences/com.apple.driver.AppleHIDMouse.plist preferences/
cp -f ~/Library/Preferences/com.apple.loginitems.plist preferences/
cp -f ~/Library/Preferences/com.apple.menuextra.clock.plist preferences/
cp -f ~/Library/Preferences/com.apple.screensaver.plist preferences/

