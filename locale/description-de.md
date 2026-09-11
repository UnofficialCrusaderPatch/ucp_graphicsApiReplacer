# Graphics API Replacer

**Autoren**: TheRedDaemon, gynt

[ucp_graphicsApiReplacer](https://github.com/TheRedDaemon/ucp_graphicsApiReplacer)

Dieses Modul ersetzt die alte DirectDraw-Anzeige durch ein moderneres System mit DirectX oder OpenGL. Es übernimmt dazu die Fenstererzeugung, die wenigen verwendeten DirectDraw-Aufrufe und bestimmte Eingabefunktionen. Im Kern gibt es sich als DirectDraw aus und stellt Crusader Speicher für die von der CPU gezeichneten Bilder bereit. Diese werden anschließend als Textur über DirectX 11 oder OpenGL angezeigt. Die Mauseingaben werden an die geänderte Darstellung angepasst.

Unterstützung wird derzeit nur für die westlichen Versionen Crusader 1.41 und Crusader Extreme 1.41.1-E zugesichert. Andere, östliche Versionen von 1.41 funktionieren möglicherweise ebenfalls. Versionen vor HD (1.3?) funktionieren ausdrücklich **NICHT**.

### Einstellungen

Die einzelnen Optionen sind im Konfigurationsbereich erklärt. Allgemein gilt:

- Die Auflösung im Spiel legt nur die Renderauflösung fest. Die Fensterauflösung wird in den Optionen dieses Moduls eingestellt.
- Das Seitenverhältnis des Spiels bleibt erhalten. Freie Flächen im Fenster bleiben schwarz und erscheinen auch in Aufnahmen, da sie Teil des ausgegebenen Bildes sind.
- Solange eine der drei Hauptmaustasten gedrückt ist, bleibt der Zeiger auf den Spielbereich des Fensters begrenzt.
- Änderungen an den Optionen erfordern einen Neustart des Spiels.

### Rückmeldungen

Für Probleme oder Vorschläge zu diesem Modul kannst du ein GitHub-Issue eröffnen.
