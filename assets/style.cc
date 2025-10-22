:root{
  --brand:#0ea5e9; --dark:#0f172a; --muted:#64748b; --bg:#f8fafc; --card:#ffffff;
}
*{box-sizing:border-box} html,body{margin:0;font-family:system-ui,Segoe UI,Roboto,Arial}
a{color:inherit;text-decoration:none}
.container{max-width:1100px;margin:auto;padding:1rem}
.nav{position:sticky;top:0;background:var(--card);border-bottom:1px solid #e5e7eb;z-index:10}
.nav .wrap{display:flex;align-items:center;justify-content:space-between}
.brand{display:flex;align-items:center;gap:.5rem;color:var(--dark);font-weight:700}
.brand span{color:var(--brand)}
.menu{display:flex;gap:1rem;font-weight:600}
.menu a{padding:.75rem;border-radius:.5rem}
.menu a.active, .menu a:hover{background:#e0f2fe;color:#0369a1}
.burger{display:none;border:0;background:transparent;font-size:1.5rem}

.hero{background:linear-gradient(135deg,#e0f2fe,#f1f5f9);padding:4rem 1rem;text-align:center}
.hero h1{margin:0 0 .5rem;color:var(--dark);font-size:clamp(1.8rem,4vw,2.6rem)}
.hero p{color:var(--muted);max-width:700px;margin:.5rem auto 0}

.grid{display:grid;gap:1rem;grid-template-columns:repeat(12,1fr)}
.cards>.card{grid-column:span 4;background:var(--card);border:1px solid #e5e7eb;border-radius:14px;padding:1rem}
.card h3{margin:.2rem 0}.card p{color:var(--muted)}
.btn{display:inline-block;background:var(--brand);color:white;padding:.7rem 1rem;border-radius:.7rem;font-weight:700}
.btn:hover{opacity:.95}

.footer{margin-top:2rem;padding:2rem 1rem;background:var(--dark);color:#cbd5e1;text-align:center;border-top:4px solid var(--brand)}

.lead{color:var(--muted)}
.img{width:100%;height:180px;background:#e2e8f0;border-radius:10px;display:flex;align-items:center;justify-content:center;color:#475569}

/* responsive */
@media (max-width:900px){ .cards>.card{grid-column:span 6} }
@media (max-width:640px){
  .menu{display:none;flex-direction:column;padding:0 1rem 1rem}
  .menu.open{display:flex}
  .burger{display:block}
  .cards>.card{grid-column:span 12}
}