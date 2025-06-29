<p align="center">
  <strong>انتخاب زبان:</strong>
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
  <a href="https://b1tcore.org"><strong>🌐 وب‌سایت</strong></a> |
  <a href="INSTALL.md"><strong>🚀 نصب</strong></a> |
  <a href="doc/getting-started.md"><strong>📖 شروع کار</strong></a>
</p>

---

## 🔍 درباره بیت

Bit یک ارز دیجیتال غیرمتمرکز و مبتنی بر جامعه است که بر شفافیت، کمیابی و توانمندسازی فردی تأکید دارد. این پروژه تحت شعار **“FollowTheBit”** مجدداً راه‌اندازی شده و از مکانیزم اجماع Scrypt AuxPoW استفاده می‌کند—که هم امکان استخراج انفرادی امن را فراهم می‌کند و هم با استخراج مشترک (merge-mining) سازگار است.

بیت فراتر از یک بلاک‌چین ساده است؛ نمادی است از خروج از سیستم‌های سنتی، شکستن محدودیت‌های ساختگی و انتخاب حقیقت به جای مد روز. بیت اینجا نیست تا دنیای قدیم را بازتولید کند—بلکه اینجاست تا قوانین را از نو بنویسد، یک بلاک در هر بار.

---

## 🎯 چشم‌انداز ما

* **غیرمتمرکزسازی توسط دارندگان**
  غیرمتمرکزسازی واقعی از مالکیت گسترده ناشی می‌شود، نه صرفاً قدرت استخراج.
* **امنیت مبتنی بر کارمزد**
  با کاهش پاداش‌های بلاک، زمان بلاک ۱ دقیقه‌ای و عرضه محدود بیت تضمین می‌کند که کارمزد تراکنش‌ها برای حفظ امنیت شبکه کافی باشد.
* **کمیابی داخلی**
  سقف سخت حدود ۲.۱ میلیون واحد B1T حفظ ارزش در بلندمدت را تضمین می‌کند.

---

## ⚙️ مشخصات فنی

| پارامتر              | مقدار                         |
| -------------------- | ----------------------------- |
| **عرضه کل کوین**     | \~۲.۱ میلیون B1T (سقف سخت)    |
| **پاداش اولیه بلاک** | ۵ B1T                         |
| **فاصله هاوینگ**     | هر ۲۱۰,۰۰۰ بلاک               |
| **زمان بلاک**        | ۱ دقیقه                       |
| **مکانیزم اجماع**    | Scrypt AuxPoW (استخراج مشترک) |

---

## 💻 API JSON-RPC

رابط برنامه‌نویسی JSON-RPC بیت کور خودمستندسازی است. برای مشاهده دستورها اجرا کنید:

```
bit-cli help
bit-cli help <command>
```

برای مرجع قابل مرور، به [مستندات RPC بیت‌کوین کور](https://developer.bitcoin.org/reference/rpc/) مراجعه کنید—رابط‌ها مشابه هستند.

---

## پورت‌ها

یک نود می‌تواند دو پورت مختلف را باز کند: یکی برای **شبکه همتا به همتا (P2P)** برای ارتباط با نودهای دیگر و دیگری برای دسترسی به API RPC. به صورت پیش‌فرض پورت‌ها به شکل زیر هستند:

| عملکرد  | mainnet | testnet | regtest |
| :------ | ------: | ------: | ------: |
| **P2P** |   33317 |   44417 |   22217 |
| **RPC** |   33318 |   44418 |   22218 |

برای تنظیم آن‌ها از پارامترهای `-port` و `-rpcport` استفاده کنید.

---

## 🌐 جوامع 🐰

به جامعه ما بپیوندید تا درباره بیت بحث کنید، میم به اشتراک بگذارید، سوال بپرسید یا پروژه‌هایتان را نمایش دهید:

* **Reddit:** [r/FollowTheBit](https://www.reddit.com/r/FollowTheBit/)
* **Discord:** [https://discord.gg/UevXymWWjD](https://discord.gg/UevXymWWjD)
* **Telegram:** [https://t.me/Bittoshimoto](https://t.me/Bittoshimoto)
* **Twitter/X:** [https://x.com/bittoshimo](https://x.com/bittoshimo)

---

## ⚖️ مجوز

بیت کور تحت مجوز MIT منتشر شده است.
به [COPYING](COPYING) مراجعه کنید یا به [opensource.org/licenses/MIT](https://opensource.org/licenses/MIT) سر بزنید.

<br />
<p align="center">
  &copy; توسعه‌دهندگان بیت
</p>
