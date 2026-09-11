# Graphics API Replacer

**Auteurs**: TheRedDaemon, gynt

[ucp_graphicsApiReplacer](https://github.com/TheRedDaemon/ucp_graphicsApiReplacer)

Ce module remplace l’ancien affichage DirectDraw par un système plus moderne utilisant DirectX ou OpenGL. Il modifie et contrôle la création de la fenêtre, les quelques appels DirectDraw utilisés et certaines fonctions d’entrée. Il se fait passer pour DirectDraw et fournit la mémoire dans laquelle Crusader dessine ses images par rendu logiciel. Le résultat est ensuite affiché comme une texture avec DirectX 11 ou OpenGL. Les entrées de la souris sont adaptées au nouvel affichage.

La prise en charge n’est actuellement garantie que pour les versions occidentales de Crusader 1.41 et Crusader Extreme 1.41.1-E. D’autres versions orientales de 1.41 peuvent fonctionner. Les versions antérieures à HD (1.3 ?) ne fonctionnent **PAS**.

### Options

Les options sont détaillées dans l’onglet de configuration. Quelques règles générales :

- La résolution du jeu règle uniquement le rendu. La résolution de la fenêtre se règle dans les options du module.
- Le rapport d’image du jeu est conservé. Les zones vides restent noires et apparaissent aussi dans les enregistrements, car elles font partie de l’image affichée.
- Tant que l’un des trois boutons principaux de la souris est maintenu, le curseur reste dans la zone de jeu de la fenêtre.
- Modifier les options nécessite un redémarrage du jeu.

### Retours

Pour signaler un problème ou proposer une amélioration de ce module, ouvrez une issue GitHub.
