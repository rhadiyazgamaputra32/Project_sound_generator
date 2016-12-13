int speaker= 9; // membuat variabel Speaker untuk pin 9 digital
void setup(){
}
void Do() {  tone(speaker, 261); }  // fungsi variabel untuk nada DO
void re() {  tone(speaker, 294); }  // fungsi variabel untuk nada RE
void mi() {  tone(speaker, 329); }   // fungsi variabel untuk nada MI
void fa() {  tone(speaker, 349); }   // fungsi variabel untuk nada FA
void sol() {  tone(speaker, 392); }   // fungsi variabel untuk nada SOL
void la() {  tone(speaker, 440); }   // fungsi variabel untuk nada LA
void si() {  tone(speaker, 493); }   // fungsi variabel untuk nada SI
void doo() {  tone(speaker, 522); } // fungsi variabel untuk nada DOO
void ree() {  tone(speaker, 588); } // fungsi variabel untuk nada REE
void mii() {  tone(speaker, 658); } // fungsi variabel untuk nada MII
void faa() {  tone(speaker, 698); } // fungsi variabel untuk nada FAA
void soll() {  tone(speaker, 784); } // fungsi variabel untuk nada SOLL
void DIAM() {  noTone(speaker); }     // fungsi variabel untuk nada DIAM

void loop() {
    sol();delay(1500);  doo();delay(1500); la();delay(500);  sol();delay(1500); mi();delay(1500); // pada mu negeri
    sol();delay(1500); DIAM();delay(10); sol();delay(500);  doo();delay(1500);  ree();delay(500); mii();delay(2000); DIAM();delay(800); //kami berjanji
    faa();delay(1500);  soll();delay(1500); DIAM();delay(10); soll();delay(500);  mii();delay(1500); doo();delay(1500); //padamu negeri
    si();delay(1000); doo();delay(500); ree();delay(1500);  mii();delay(500);  ree();delay(2000); DIAM();delay(800); // kami berbakti
    sol();delay(1500);  doo();delay(1500); la();delay(500);  sol();delay(1500); mi();delay(1500); // pada mu negeri
    sol();delay(1000); DIAM();delay(10); sol();delay(500);  doo();delay(1500);  ree();delay(500); mii();delay(2000); DIAM();delay(800); //kami mengabdi
    faa();delay(1500);  soll();delay(1500); DIAM();delay(10); soll();delay(500);  mii();delay(1500); doo();delay(1500);  DIAM();delay(800); //bagimu negeri
    ree();delay(500); mii();delay(500); faa();delay(500); mii();delay(2500);  DIAM();delay(800); ree();delay(2000); DIAM();delay(500); doo();delay(3000);  DIAM();delay(1500);
    }
    
