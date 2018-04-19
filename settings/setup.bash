# Setup script to install settings on MacOS

# Set App Launch Services
cp -Rf services/* ~/Library/Services

# Set Run Commands files for vim and bash
cp -f .bash_profile ~/
cp -f .vimrc ~/

# Set Global gitignore
cp -f .gitignore_global ~/

# Set Atom Settings
cp -f atom/*.cson ~/.atom/
cp -f atom/*.less ~/.atom/

# Set System Preferences (available after logout + login)
cp -f preferences/*.plist ~/Library/Preferences/


