<p align="center">
  <strong>Seleccionar idioma:</strong>
  <a href="README.md">EN</a> |
  <a href="README_zh-CN.md">CN</a> |
  <a href="README_pt.md">PT</a> |
  <a href="README_fa.md">FA</a> |
  <a href="README_vi.md">VI</a> |
  <a href="README_fr.md">FR</a> |
  <a href="README_ja.md">JA</a> |
  <a href="README_de.md">DE</a>
</p>

<h1 align="center">
  <img src="https://b1tcore.org/bit-logo.png" alt="Bit" width="300" />
  <br /><br />
  Bit Core [B1T]
</h1>

<p align="center">
  <a href="https://b1tcore.org"><strong>🌐 Sitio web</strong></a> |
  <a href="INSTALL.md"><strong>🚀 Instalación</strong></a> |
  <a href="doc/getting-started.md"><strong>📖 Primeros pasos</strong></a>
</p>

---

## 🔍 Acerca de Bit

Bit es una criptomoneda descentralizada y orientada a la comunidad, basada en la transparencia, la escasez y el empoderamiento individual. Relanzado bajo el lema **“FollowTheBit”**, utiliza el probado mecanismo de consenso Scrypt AuxPoW—permitiendo la minería en solitario de forma segura y a la vez siendo compatible con la merge-mining.

Más que una blockchain, Bit es un símbolo: seguir al conejo blanco significa salir de los sistemas heredados, romper límites artificiales y elegir la verdad en lugar de la moda. Bit no está aquí para replicar el mundo antiguo, sino para reescribir las reglas, bloque a bloque.

---

## 🎯 Nuestra visión

* **Descentralización por los poseedores**
  La verdadera descentralización proviene de una propiedad amplia, no solo del poder de minería.
* **Seguridad basada en tarifas**
  A medida que disminuyen las recompensas de bloque, los bloques de 1 minuto de Bit y su oferta moderada mantienen tarifas de transacción suficientes para asegurar la red.
* **Escasez integrada**
  Un límite máximo de \~2,1 millones de B1T garantiza la preservación de valor a largo plazo.

---

## ⚙️ Especificaciones técnicas

| Parámetro                | Valor                        |
| ------------------------ | ---------------------------- |
| **Oferta de monedas**    | \~2,1 M B1T (tope máximo)    |
| **Recompensa inicial**   | 5 B1T                        |
| **Intervalo de halving** | cada 210.000 bloques         |
| **Tiempo de bloque**     | 1 minuto                     |
| **Consenso**             | Scrypt AuxPoW (merge-mining) |

---

## 💻 API JSON-RPC

La API JSON-RPC de Bit Core está autodocumentada. Ejecuta:

```
bit-cli help
bit-cli help <comando>
```

Para una referencia navegable, consulta los [docs de RPC de Bitcoin Core](https://developer.bitcoin.org/reference/rpc/) — las interfaces son similares.

---

## Puertos

Un nodo puede exponer dos puertos diferentes: uno para la **red P2P** para comunicarse con otros nodos, y otro para acceder a la API RPC. Por defecto, los puertos son:

| Función | mainnet | testnet | regtest |
| :------ | ------: | ------: | ------: |
| **P2P** |   33317 |   44417 |   22217 |
| **RPC** |   33318 |   44418 |   22218 |

Para configurarlos, usa los parámetros `-port` y `-rpcport`.

---

## 🌐 Comunidades 🐰

Únete a nuestra comunidad para debatir, compartir memes, hacer preguntas o mostrar tus proyectos:

* **Reddit:** [r/FollowTheBit](https://www.reddit.com/r/FollowTheBit/)
* **Discord:** [https://discord.gg/UevXymWWjD](https://discord.gg/UevXymWWjD)
* **Telegram:** [https://t.me/Bittoshimoto](https://t.me/Bittoshimoto)
* **Twitter/X:** [https://x.com/bittoshimo](https://x.com/bittoshimo)

---

## ⚖️ Licencia

Bit Core se publica bajo los términos de la licencia MIT.
Consulta [COPYING](COPYING) o visita [opensource.org/licenses/MIT](https://opensource.org/licenses/MIT).

<br />
<p align="center">
  &copy; Desarrolladores de Bit
</p>
