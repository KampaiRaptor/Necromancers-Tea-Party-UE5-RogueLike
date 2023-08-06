# Necromancer's Tea Party

This is a on-going small roguelike game as a exploration in StateTrees for AI and PCG for world generation in Unreal Engine.

# AI notes:
AI system in Unreal Engine 5.2 using State Trees. I personally like this approach much more than behavior trees.
The system is universal, so it should be easy to change different animations and behavior across characters.
There is just one template character, that walks to random location and then attacks player. 
If player guards with shield AI will react and stop the attack. AI can combo its attack, once it finishes attack 1, there is 50% it will follow with another one from different direction. These attacks can be easily changed by changing anim montages.

# PCG:
I have setup three PCG generators, one for fantasy forrest that has randomized trees, rocks, grass etc... |
Path generation that uses landscape spline to generate road through the forrest and fantasy city generator, that includes several buildings, trees, objects scattered around the buildings, watch towers etc...


Enjoy!

## Gameplay

![ezgif com-optimize (11)](https://github.com/KampaiRaptor/Unreal-Engine-StateTree-AI/assets/120315901/0e25e0f9-7bec-460c-a281-95a9c29ec784)

![ezgif com-optimize (12)](https://github.com/KampaiRaptor/Unreal-Engine-StateTree-AI/assets/120315901/32956b62-d4ae-4c55-88f4-a533ba08c6e2)

![ezgif com-optimize (8)](https://github.com/KampaiRaptor/Unreal-Engine-StateTree-AI/assets/120315901/4e0b63f7-4cf6-447c-9a87-e51c3c4e0b32)

![ezgif com-optimize (9)](https://github.com/KampaiRaptor/Unreal-Engine-StateTree-AI/assets/120315901/61792fa0-75a8-4caa-8f7e-d3998d42b83c)



## Credits 
Include following packs before using the project:

City of Brass: Enemies 
(https://www.unrealengine.com/marketplace/en-US/product/b7cbc53813a24db1a5bd42f75151698c)

Sword and Shield First Person Animation Set 
(https://www.unrealengine.com/marketplace/en-US/product/sword-shield-first-person-animation-set)

Stylized - Dynamic Nature
(https://www.unrealengine.com/marketplace/en-US/product/stylized-dynamic-nature?sessionInvalidated=true)

Fantasy Medieval Megapack - Castle - Town - Village - Dungeon - Docks - Forest
(https://www.unrealengine.com/marketplace/en-US/product/fantasy-medieval-megapack)


## License

[MIT](https://choosealicense.com/licenses/mit/)
    - That means you can use this project for any personal or commercial use, but you have to credit source.

Please do realize that you are accepting UE EULA by using this project as it is Unreal Engine based project.


## Author

- [@SirFansi](https://github.com/Fansi129)
- Contact: fansi@kampairaptor.com
- If you like Kampai Raptor open source projects please consider supporting us on: https://www.patreon.com/kampairaptor

## Contributing

Contributions are always welcome! I would love to see what this project can become.
If you are interested please do let me know!
