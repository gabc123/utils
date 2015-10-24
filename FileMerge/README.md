# FileMerge aka fmerge
This util concatenate text files together. <br />
It reads stdin for file paths and then merge them on after the other *. <br />
It ether outputs the result to stdout, or to a file specified in the command line .  <br />
Example use: <br />
$ gcc -o fmerge fmerge.c <br />
$ ls */*.java | ./fmerge outputfile.txt  <br />
Processing file: Collisions/Collisions.java <br />
Processing file: Controller/ExplosionObserver.java <br />
Processing file: Controller/GameController.java <br />
Processing file: Controller/GameStatsObservable.java <br />
Processing file: Controller/KeyboardController.java <br />
Processing file: Controller/RenderController.java <br />
Processing file: GameData/Ai.java <br />
Processing file: GameData/GameModel.java <br />
Processing file: GameData/GraphicModels.java <br />
Processing file: GameData/Terrain.java <br />
Processing file: GameObjects/Direction.java <br />
Processing file: GameObjects/Explosion.java <br />
Processing file: GameObjects/GameObject.java <br />
Processing file: GameObjects/Physics.java <br />
Processing file: GameObjects/Player.java <br />
Processing file: GameObjects/Projectile.java <br />
Processing file: GameObjects/ProjectileType.java <br />
Processing file: GameObjects/SpawnBox.java <br />
Processing file: GameObjects/Weapon.java <br />
Processing file: GameTimers/GameTimer.java <br />
Processing file: GameTimers/RenderTimer.java <br />
Processing file: UIGraphics/Lobby.java <br />
Processing file: UIGraphics/LoginScreen.java <br />
Processing file: UIGraphics/TopMenu.java <br />
Processing file: UIGraphics/UIStatObserver.java <br />
Processing file: View/GameView.java <br />
Processing file: lab5game/BattleArena.java <br />
Processing file: lab5game/GameSetup.java <br />
Processing file: lab5game/Lab5game.java <br />
 <br />
Files processed: 29 <br />
$ <br />
All the contents of the files from ls */*.java is merge into the file outputfile.txt <br />
*Note it adds the file path between different files in outputfile.txt <br />
