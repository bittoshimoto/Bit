<p align="center">
  <strong>Sprache wählen:</strong>
  <a href="README.md">EN</a> |
  <a href="README_zh-CN.md">CN</a> |
  <a href="README_pt.md">PT</a> |
  <a href="README_fa.md">FA</a> |
  <a href="README_vi.md">VI</a> |
  <a href="README_fr.md">FR</a> |
  <a href="README_ja.md">JA</a> |
  <a href="README_de.md">DE</a> |
  <a href="README_es.md">ES</a>
</p>

<h1 align="center">
  <img src="https://b1tcore.org/bit-logo.png" alt="Bit" width="300" />
  <br /><br />
  Bit Core [B1T]
</h1>

<p align="center">
  <a href="https://b1tcore.org"><strong>🌐 Webseite</strong></a> |
  <a href="INSTALL.md"><strong>🚀 Installation</strong></a> |
  <a href="doc/getting-started.md"><strong>📖 Erste Schritte</strong></a>
</p>

---

## 🔍 Über Bit

Bit ist eine dezentralisierte, gemeinschaftsorientierte Kryptowährung, die auf Transparenz, Knappheit und individueller Ermächtigung basiert. Unter dem Motto **„FollowTheBit“** neu gestartet, nutzt es den bewährten Scrypt AuxPoW Konsensmechanismus – ermöglicht sicheres Solo-Mining und bleibt gleichzeitig merge-mining-kompatibel.

Mehr als nur eine Blockchain ist Bit ein Symbol: Dem weißen Kaninchen zu folgen bedeutet, sich von vererbten Systemen zu lösen, künstliche Grenzen zu sprengen und Wahrheit statt Trend zu wählen. Bit ist nicht da, um die alte Welt zu replizieren – es ist da, um die Regeln neu zu schreiben, Block für Block.

---

## 🎯 Unsere Vision

* **Dezentralisierung durch Inhaber**
  Echte Dezentralisierung entsteht durch breite Besitzverhältnisse, nicht nur durch Mining-Power.
* **Gebührenbasierte Sicherheit**
  Wenn Blockbelohnungen sinken, sorgen Bits 1-Minuten-Blöcke und begrenztes Angebot dafür, dass Transaktionsgebühren ausreichen, um das Netzwerk zu sichern.
* **Eingebaute Knappheit**
  Eine harte Obergrenze von ca. 2,1 Millionen B1T garantiert langfristigen Werterhalt.

---

## ⚙️ Technische Daten

| Parameter                 | Wert                         |
| ------------------------- | ---------------------------- |
| **Münzangebot**           | \~2,1 Mio. B1T (Hard Cap)    |
| **Anfängliche Belohnung** | 5 B1T                        |
| **Halving-Intervall**     | alle 210.000 Blöcke          |
| **Blockzeit**             | 1 Minute                     |
| **Konsens**               | Scrypt AuxPoW (Merge-Mining) |

---

## 💻 JSON-RPC API

Die JSON-RPC API von Bit Core ist selbstdokumentierend. Führen Sie aus:

```
bit-cli help
bit-cli help <command>
```

Für eine durchsuchbare Referenz siehe die [Bitcoin Core RPC-Dokumentation](https://developer.bitcoin.org/reference/rpc/) – die Schnittstellen sind ähnlich.

---

## Ports

Ein Node kann zwei verschiedene Ports bereitstellen: einen für das **P2P-Netzwerk**, um mit anderen Nodes zu kommunizieren, und einen zweiten für den Zugriff auf die RPC API. Standardmäßig sind die Ports:

| Funktion | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| **P2P**  |   33317 |   44417 |   22217 |
| **RPC**  |   33318 |   44418 |   22218 |

Zur Konfiguration verwenden Sie die Parameter `-port` und `-rpcport`.

---

## 🌐 Communities 🐰

Treten Sie unserer Community bei, um zu diskutieren, Memes zu teilen, Fragen zu stellen oder Ihre Projekte vorzustellen:

* **Reddit:** [r/FollowTheBit](https://www.reddit.com/r/FollowTheBit/)
* **Discord:** [https://discord.gg/UevXymWWjD](https://discord.gg/UevXymWWjD)
* **Telegram:** [https://t.me/Bittoshimoto](https://t.me/Bittoshimoto)
* **Twitter/X:** [https://x.com/bittoshimo](https://x.com/bittoshimo)

---

## ⚖️ Lizenz

Bit Core wird unter der MIT-Lizenz veröffentlicht.
Siehe [COPYING](COPYING) oder besuchen Sie [opensource.org/licenses/MIT](https://opensource.org/licenses/MIT).

<br />
<p align="center">
  &copy; Bit-Entwickler
</p>
