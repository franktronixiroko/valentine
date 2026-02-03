<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Hey Mary 💖</title>
  <style>
    body {
      margin: 0;
      height: 100vh;
      display: flex;
      align-items: center;
      justify-content: center;
      background: linear-gradient(135deg, #ff9a9e, #fad0c4);
      font-family: 'Arial', sans-serif;
      overflow: hidden;
    }

    .card {
      background: white;
      padding: 30px;
      border-radius: 20px;
      text-align: center;
      box-shadow: 0 15px 30px rgba(0,0,0,0.2);
      max-width: 350px;
    }

    h1 {
      color: #e91e63;
    }

    button {
      padding: 12px 25px;
      font-size: 16px;
      border: none;
      border-radius: 25px;
      cursor: pointer;
      transition: all 0.3s ease;
      position: relative;
    }

    #yesBtn {
      background: #e91e63;
      color: white;
      margin-right: 10px;
    }

    #noBtn {
      background: #ccc;
    }

    .flowers {
      font-size: 40px;
      animation: float 2s infinite;
    }

    @keyframes float {
      0% { transform: translateY(0); }
      50% { transform: translateY(-10px); }
      100% { transform: translateY(0); }
    }
  </style>
</head>
<body>

  <div class="card" id="card">
    <h1>Hey Mary 💕</h1>
    <p>Will you go out with me this Valentine’s? 🌹</p>
    <button id="yesBtn" onclick="sayYes()">YES 😍</button>
    <button id="noBtn" onclick="moveNo()">NO 🙃</button>
  </div>

  <script>
    let noScale = 1;

    function moveNo() {
      const noBtn = document.getElementById("noBtn");

      noScale -= 0.1;
      if (noScale < 0.3) noScale = 0.3;

      const x = Math.random() * (window.innerWidth - 100);
      const y = Math.random() * (window.innerHeight - 50);

      noBtn.style.position = "absolute";
      noBtn.style.left = x + "px";
      noBtn.style.top = y + "px";
      noBtn.style.transform = `scale(${noScale})`;
    }

    function sayYes() {
      const card = document.getElementById("card");
      card.innerHTML = `
        <h1>YAYYY!!! 💖🎉</h1>
        <p>You just made my Valentine’s perfect 🌹</p>
        <div class="flowers">🌸🌺💐🌷🌹</div>
        <p>Can’t wait to spend it with you 😍</p>
      `;
    }
  </script>

</body>
</html>