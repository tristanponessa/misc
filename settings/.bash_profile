alias l='ls -Gh'
alias ll='ls -lGh'
alias la='ls -lGah'

alias gs='git status'
alias gadd='git add'
alias gcm='git commit -m'
alias gcamd='git commit --amend'
alias gb='git branch'
alias cherry='git cherry-pick'
alias gckt='git checkout'

alias cdhub='cd /Users/agrumbac/Documents/github'
alias cdvog='cd /Users/agrumbac/Documents/vog'

alias brew='$HOME/homebrew/bin/brew'

# atom
alias atom='open -a atom'

# git config
git config --global user.email "agrumbac@student.42.fr"
git config --global user.name "grumbach"
git config --global core.excludesfile ~/.gitignore_global

# homebrew path
export PATH=$PATH:~/homebrew/bin

# free
alias free='rm -rf ~/Library/*42_cache* &&  df -h ~'

# the fuck is that
fuck () {
    TF_PYTHONIOENCODING=$PYTHONIOENCODING;
    export TF_ALIAS=fuck;
    export TF_SHELL_ALIASES=$(alias);
    export TF_HISTORY="$(fc -ln -10)";
    export PYTHONIOENCODING=utf-8;
    TF_CMD=$(
    thefuck THEFUCK_ARGUMENT_PLACEHOLDER $@
    ) && eval $TF_CMD;
    unset TF_HISTORY;
    export PYTHONIOENCODING=$TF_PYTHONIOENCODING;
    test -n "$TF_CMD" && print -s $TF_CMD
}

