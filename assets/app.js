// menú móvil
document.getElementById("burger")?.addEventListener("click",()=>{
  document.getElementById("menu").classList.toggle("open");
});

// marca activo en la barra
const here = location.pathname.split("/").pop() || "index.html";
document.querySelectorAll(".menu a").forEach(a=>{
  if(a.getAttribute("href")===here) a.classList.add("active");
});