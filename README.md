# so_long – 42 School Project

`so_long` is a simple 2D game built using the MiniLibX graphics library.
The player navigates through a map, collecting items and reaching the exit while avoiding enemies (bonus).

---

## Main Objectives

- Read and parse a `.ber` map file.
- Render a 2D grid-based game using images.
- Handle keyboard input for movement.
- Ensure path validity: player must be able to collect all items and reach the exit.
- (Bonus) Add enemies, animations, and other effects.

---

## Game Mechanics

- The game is rendered as a tile map using MiniLibX.
- The map must contain:
  - `P`: Player start
  - `E`: Exit
  - `C`: Collectibles
  - `1`: Wall
  - `0`: Empty space
- The player moves with arrow keys or WASD.
- Game ends when all collectibles are gathered and the player reaches the exit.

---

## Example Map (.ber)

```
1111111
1P0C0E1
1000001
1111111
```

---

## Example Usage

```bash
$ make
$ ./so_long maps/level1.ber
```

---

## Conclusion

`so_long` is a fun and challenging introduction to basic graphics programming.
It reinforces C fundamentals, file parsing, dynamic memory handling, and real-time input.
The bonus part allows creativity by adding animations and enemies.

---

> ✅ **Final Grade: 100/100**
> Project made at [42 Lisboa](https://www.42lisboa.com/pt/)
> 👤 Author: Stephan Rodrigues Lassaponari ([@Stezsz](https://github.com/Stezsz))
