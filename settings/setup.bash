# Setup script to install settings on MacOS

# Set App Launch Services
cp -Rf services/* ~/Library/Services

# Set Run Commands files for vim bash lldb git
cp -f .bash_profile ~/
cp -f .vimrc ~/
cp -f .lldbinit ~/
cp -f .gitconfig ~/

# Set Global gitignore
cp -f .gitignore_global ~/

# Set Atom Settings
cp -f atom/*.cson ~/.atom/
cp -f atom/*.less ~/.atom/

# Set System Preferences (available after logout + login)
cp -f Preferences/*.plist ~/Library/Preferences/

# Enable keyboard ludicrous mode
defaults write -g KeyRepeat -int 1
defaults write -g InitialKeyRepeat -float 8.5
defaults write -g ApplePressAndHoldEnabled -bool false

# Set Dark mode
defaults write -globalDomain AppleInterfaceStyle -string Dark

# Mouse speed
defaults write -g com.apple.mouse.scaling -float 2
defaults write -g com.apple.mouse.doubleClickThreshold -float 0.8
defaults write -g com.apple.scrollwheel.scaling -float 0.75

# Set wallpaper
open SetWallpaper.app

