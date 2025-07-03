#!/bin/bash
# Symlink every file/folder from ~/bob/ to ~, replacing existing ones

src="$HOME/bob"
dest="$HOME"

shopt -s dotglob  # Include hidden files (dotfiles)
for item in "$src"/* "$src"/.*; do
  # Skip . and ..
  [ "$(basename "$item")" = "." ] && continue
  [ "$(basename "$item")" = ".." ] && continue

  target="$dest/$(basename "$item")"
  # Remove if exists (file, folder, or symlink)
  [ -e "$target" ] || [ -L "$target" ] && rm -rf "$target"
  # Create symlink
  ln -s "$item" "$target"
done
echo "Symlinking complete."
