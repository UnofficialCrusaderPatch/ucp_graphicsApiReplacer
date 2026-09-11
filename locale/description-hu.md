# Graphics API Replacer

**Szerzők**: TheRedDaemon, gynt

[ucp_graphicsApiReplacer](https://github.com/TheRedDaemon/ucp_graphicsApiReplacer)

Ez a modul a régi DirectDraw megjelenítési rendszert modernebb, DirectX-et vagy OpenGL-t használó rendszerre cseréli. Ehhez átveszi az ablak létrehozását, a kevés használt DirectDraw-hívást és bizonyos bemeneti függvényeket. Lényegében DirectDraw-nak adja ki magát, és memóriát biztosít a Crusader szoftveresen kirajzolt képkockáihoz. Az eredményt ezután textúraként jeleníti meg DirectX 11-gyel vagy OpenGL-lel. Az egérbemenetet az új megjelenítéshez igazítja.

A támogatás jelenleg csak a Crusader 1.41 és a Crusader Extreme 1.41.1-E nyugati kiadásaihoz garantált. Más, keleti 1.41-es változatok működhetnek. A HD előtti kiadások (1.3?) biztosan **NEM** működnek.

### Beállítások

Az egyes opciókat a konfigurációs lap részletezi. Néhány általános szabály:

- A játékbeli felbontás csak a kirajzolás felbontását állítja. Az ablak felbontását a modul opcióival kell megadni.
- A játék képaránya megmarad. Az üres részek feketék maradnak, és a felvételeken is látszanak, mert a megjelenített kép részei.
- A három fő egérgomb bármelyikének nyomva tartásakor a kurzor az ablak játékterületére korlátozódik.
- A beállítások módosításához újra kell indítani a játékot.

### Visszajelzés

A modullal kapcsolatos hibákhoz vagy javaslatokhoz nyiss GitHub-issue-t.
