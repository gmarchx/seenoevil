# See No Evil

## Basic project workflow:

Any time changes are made to the source code, make sure to Build -> Rebuild in MSVS, which should create a new SeeNoEvil.uproject file.
Edits to the blueprint or other project settings shouldn't require rebuilding as far as I know, but I'm not certain.

As soon as possible, please start merging changes to this working copy from any existing temporary projects.

Please post non-code assets into the respective directories so we have a unified location for them. 
If we need to move them into the project directories, we can do so after there's a copy in those locations.


Current directory structure:

 Root
     .git
     SeeNoEvil (Main project directory)
         [Project subdirectories]
         SeeNoEvil.uproject
         SeeNoEvil.sln
     Assets
         Graphics
             2D
             3D
         Other
         Sounds
     README.md

