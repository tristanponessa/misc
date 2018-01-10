# Setup script to install settings on MacOS

# Set App Launch Services
cp -Rf services/* ~/Library/Services

# Set Run Commands files for vim and bash
cp -f .bash_profile ~/
cp -f .vimrc ~/

# Set System Preferences (available after logout + login)
cp -f com.apple.systempreferences.plist ~/Library/Preferences/


