**Dagbók**
------------------------------------


24/11 - Bjó til grunn inna gitub, klassar búnir til.

26/11 - Laga prenta fallið á þéttir klassanum svo það prenti rétt.

01/12 - Planið í dag er að byrja á hashtable klassa. Ætla gera poly fyrst og færa svo yfir, það er planið allavega.
    09:30 - Ákvað að byrja bara á hashtable og vinna mig hægt í gegnum það. Operators er ókláraðir í klassa.
    09:49 - Operators komnir og grunnur á hashtable byrjað að myndast

03/12 - Planið er að klára hash klassan í dag. Fékk hjálp sem bjargaði mér alveg.

08/12 - Ætla halda áfram með klassana, er búin að klára eyda       
    fallid þar sem ég þurfti bara að bæta nokkrum línum við.
    15:08 - er ennþá í veseni hvernig ég vill gera breyta fallið.
    Hvernig það stendur núna er að það eyðir út því sem er í hylkinu og gerir nýtt í staðinn, en það er ekkert sem tékkar hvernig íhlutur er fyrir.
    16:25 - held mig við það að eyða og skrá nýtt í staðinn. notandi er látinn vita í menu áður en hann breytir og þarf að staðfesta. Er að vinna í menu núna.

09/12 - Menu komið og allir klassar og föll sem þeim fylgja.
    Þar sem skilinn eru á laug fyrir hádegi og ég mun vera vinna mest allan daginn á morgun í póstmiðstöðinni og það er brjálað að gera þar sem allir eru að panta pakka í heimsendingu núna, þá þarf ég helst að klára verkefnið í dag.
    Ég er búinn með kringum 80% af verkefninu og er sáttur með það. Ég vildi þó að ég hefði haft meiri tíma út önnina til að læra betur á c++ og mun mjög líklega taka auka udemy course til að ná þessu betur.


**Skýrsla**
------------------------------------


Ég byrjaði að skrifa klassa sem sá um grunninn á hinum, svo fór ég í það að hanna hashmap table sem var flóknara en ég bjóst við í byrjun en það kom út rétt í lokinn.
Það var tímafrekt að fara sú leið en það tókst. notendaviðmótið tók ekki það langan tíma en ég lenti í smá veseni þar sem ég svo leysti. Einfalt forrit sem sér um skráningu íhlutar. Eyðingar fallið er ekki öruggt að nota því það yfirskrifa íhlutinn sem var fyrir(eyðir og býr til nýjan) en notandi er látinn staðfesta breytinga áður en hún er gerð.

Forritið býr til, eyðir, breytir lit, prentar og er með hjálp skipun sem sýnir notanda valmöguleikana sem hann hefur og hvernig nota eigi skipanir.

-Notendaviðmót-
------------------------------------

**skrá**
 
skráir íhluti.
template: skrá íhlutur númer stærð Litur/ohma/rýmd.
valkostir: LED, Viðnám, Þéttir
Dæmi: skrá LED 901 5 Grænn


**prenta**

prentar alla skráða íhluti.


**breyta**

breytir lit hjá íhlut.
passa að íhlutur sé LED, þetta mun skrifa yfir fyrra fallið annars.
template: breyta númer litur.
valkostir: allir litir.
Dæmi: breyta 901 blár já


**eyða**

eyðir íhlut.
template: eyða númer
Dæmi: eyða 901

