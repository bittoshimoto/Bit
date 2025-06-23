<p align="center">
  <strong>Sélectionner la langue&nbsp;:</strong>
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
  <a href="https://b1tcore.org"><strong>🌐 Site Web</strong></a> |
  <a href="INSTALL.md"><strong>🚀 Installation</strong></a> |
  <a href="doc/getting-started.md"><strong>📖 Premiers pas</strong></a>
</p>

---

## 🔍 À propos de Bit

Bit est une cryptomonnaie décentralisée et communautaire, basée sur la transparence, la rareté et l’autonomisation individuelle. Relancé sous la devise **« FollowTheBit »**, il utilise le mécanisme de consensus Scrypt AuxPoW éprouvé : permettant un minage solo sécurisé tout en restant compatible avec le merge-mining.

Plus qu’une blockchain, Bit est un symbole : suivre le lapin blanc, c’est sortir des systèmes hérités, briser les limites artificielles et choisir la vérité plutôt que la tendance. Bit n’est pas là pour reproduire l’ancien monde ; il est là pour réécrire les règles, bloc par bloc.

---

## 🎯 Notre vision

* **Décentralisation par les détenteurs**
  La vraie décentralisation provient d’une large propriété, pas seulement de la puissance de minage.
* **Sécurité basée sur les frais**
  À mesure que les récompenses de bloc diminuent, les blocs d’une minute de Bit et son offre modérée maintiennent des frais de transaction suffisants pour sécuriser le réseau.
* **Rareté intégrée**
  Un plafond fixe d’environ 2,1 millions de B1T garantit la préservation de la valeur à long terme.

---

## ⚙️ Spécifications techniques

| Paramètre                 | Valeur                       |
| ------------------------- | ---------------------------- |
| **Approvisionnement**     | \~2,1 M B1T (plafond fixe)   |
| **Récompense initiale**   | 5 B1T                        |
| **Intervalle de halving** | tous les 210 000 blocs       |
| **Temps de bloc**         | 1 minute                     |
| **Consensus**             | Scrypt AuxPoW (merge-mining) |

---

## 💻 API JSON-RPC

L’API JSON-RPC de Bit Core est auto-documentée. Exécutez :

```
bit-cli help
bit-cli help <commande>
```

Pour une référence consultable, voir la [doc RPC de Bitcoin Core](https://developer.bitcoin.org/reference/rpc/) : les interfaces sont similaires.

---

## Ports

Un nœud peut exposer deux ports : un pour le **réseau P2P** afin de communiquer avec d’autres nœuds, et un pour accéder à l’API RPC. Par défaut :

| Fonction | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| **P2P**  |   33317 |   44417 |   22217 |
| **RPC**  |   33318 |   44418 |   22218 |

Pour configurer ces ports, utilisez les paramètres `-port` et `-rpcport`.

---

## 🌐 Communautés 🐰

Rejoignez notre communauté pour discuter, partager des memes, poser des questions ou présenter vos projets :

* **Reddit :** [r/FollowTheBit](https://www.reddit.com/r/FollowTheBit/)
* **Discord :** [https://discord.gg/UevXymWWjD](https://discord.gg/UevXymWWjD)
* **Telegram :** [https://t.me/Bittoshimoto](https://t.me/Bittoshimoto)
* **Twitter/X :** [https://x.com/bittoshimo](https://x.com/bittoshimo)

---

## ⚖️ Licence

Bit Core est publié sous licence MIT.
Voir [COPYING](COPYING) ou rendez-vous sur [opensource.org/licenses/MIT](https://opensource.org/licenses/MIT).

<br />
<p align="center">
  &copy; Développeurs Bit
</p>
