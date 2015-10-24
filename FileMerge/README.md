# FileMerge aka fmerge
This util concatenate text files together.
It reads stdin for file paths and then merge them on after the other *.
It ether outputs the result to stdout, or to a file specified in the command line . 
Example use:
$ gcc -o fmerge fmerge.c
$ ls */*.java | ./fmerge outputfile.txt
Processing file: Collisions/Collisions.java
Processing file: Controller/ExplosionObserver.java
Processing file: Controller/GameController.java
Processing file: Controller/GameStatsObservable.java
Processing file: Controller/KeyboardController.java
Processing file: Controller/RenderController.java
Processing file: GameData/Ai.java
Processing file: GameData/GameModel.java
Processing file: GameData/GraphicModels.java
Processing file: GameData/Terrain.java
Processing file: GameObjects/Direction.java
Processing file: GameObjects/Explosion.java
Processing file: GameObjects/GameObject.java
Processing file: GameObjects/Physics.java
Processing file: GameObjects/Player.java
Processing file: GameObjects/Projectile.java
Processing file: GameObjects/ProjectileType.java
Processing file: GameObjects/SpawnBox.java
Processing file: GameObjects/Weapon.java
Processing file: GameTimers/GameTimer.java
Processing file: GameTimers/RenderTimer.java
Processing file: UIGraphics/Lobby.java
Processing file: UIGraphics/LoginScreen.java
Processing file: UIGraphics/TopMenu.java
Processing file: UIGraphics/UIStatObserver.java
Processing file: View/GameView.java
Processing file: lab5game/BattleArena.java
Processing file: lab5game/GameSetup.java
Processing file: lab5game/Lab5game.java

Files processed: 29
$
All the contents of the files from ls */*.java is merge into the file outputfile.txt
*Note it adds the file path between different files in outputfile.txt
