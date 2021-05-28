// BattalionItems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h> // for rand() and srand()

int troopRange(int troopMin, int troopMax) { // Set min and max range and return random int.
    int troopRange = troopMin + (std::rand() % (troopMax - troopMin + 1));
    return troopRange;
}

int main()
{
    // TEMPORARY CONTROLLER to switch between battalions. pshop.cpp uses different method. Switches below 0,1,2,3.
    int setBattalion = 3; // 0 = Junior, 1 = Senior, 2 = Veteran, 3 = Mechanics

    if (setBattalion == 0) { // Junior Battalion - "player.box.troop.a"
        // Need to get troop info from DB.
        int getWorkers = 0;
        int getWarriors = 0;

        srand(time(NULL)); // Needed right before calling random function to ensure true randomness. Does not work within the function itself.
        getWorkers = getWorkers + troopRange(100, 250);
        getWarriors = getWarriors + troopRange(100, 250);

        // This area should be used to push updated troop counts to DB. Currently setup to output to console.
        std::cout << "Workers: " << getWorkers << std::endl;
        std::cout << "Warriors: " << getWarriors << std::endl;
    } // END Junior Battalion

    if (setBattalion == 1) { // Senior Battalion - "player.box.troop.b"
        int getScouts = 0;
        int getPikemen = 0;
        int getSwordsmen = 0;
        int getArchers = 0;

        srand(time(NULL));
        getScouts = getScouts + troopRange(200, 250);
        getPikemen = getPikemen + troopRange(200, 300);
        getSwordsmen = getSwordsmen + troopRange(150, 250);
        getArchers = getArchers + troopRange(100, 200);

        std::cout << "Scouts: " << getScouts << std::endl;
        std::cout << "Pikemen: " << getPikemen << std::endl;
        std::cout << "Swordsmen: " << getSwordsmen << std::endl;
        std::cout << "Archers: " << getArchers << std::endl;
    } // END Senior Battalion

    if (setBattalion == 2) { // Veteran Battalion - "player.box.troop.c"
        int getCavalry = 0;
        int getCataphracts = 0;
        int getTransporters = 0;
        
        srand(time(NULL));
        getCavalry = getCavalry + troopRange(100, 300);
        getCataphracts = getCataphracts + troopRange(100, 200);
        getTransporters = getTransporters + troopRange(200, 450);

        std::cout << "Cavalry: " << getCavalry << std::endl;
        std::cout << "Cataphracts: " << getCataphracts << std::endl;
        std::cout << "Transporters: " << getTransporters << std::endl;
    } // END Veteran Battalion

    if (setBattalion == 3) { // Mechanics Battalion - "player.box.troop.d"
        int getBallista = 0;
        int getBatteringRams = 0;
        int getCatapults = 0;

        srand(time(NULL));
        getBallista = getBallista + troopRange(100, 400);
        getBatteringRams = getBatteringRams + troopRange(100, 250);
        getCatapults = getCatapults + troopRange(150, 350);

        std::cout << "Ballista: " << getBallista << std::endl;
        std::cout << "Battering Rams: " << getBatteringRams << std::endl;
        std::cout << "Catapults " << getCatapults << std::endl;
    } // END Mechanics Battalion
}

// Junior Battalion(100 - 250: Workers and Warriors)
// Senior Battalion(200 - 250: Scouts, 200 - 300 : Pikemen, 150 - 250 : Swordsmen, 100 - 200 : Archers)
// Veteran Battalion(100 - 300: Cavalry, 100 - 200 : Cataphracts, 200 - 450 : Transporters)
// Mechanics Battalion(100 - 400: Ballista, 100 - 250 : Battering rams, 150 - 350 : Catapults)

//if (itemid == "player.box.troop.a") {}// Junior Battalion
//if (itemid == "player.box.troop.b") {}// Senior Battalion
//if (itemid == "player.box.troop.c") {}// Veteran Battalion
//if (itemid == "player.box.troop.d") {}// Mechanics Battalion
