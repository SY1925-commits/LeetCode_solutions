/*
A truck has two fuel tanks. You are given two integers, mainTank representing the fuel 
present in the main tank in liters and additionalTank representing the fuel present in the 
additional tank in liters.

The truck has a mileage of 10 km per liter. Whenever 5 liters of fuel get used up in the 
main tank, if the additional tank has at least 1 liters of fuel, 1 liters of fuel will be 
transferred from the additional tank to the main tank.

Return the maximum distance which can be traveled.
*/

int distanceTraveled(int mainTank, int additionalTank) {
    int dT = 0;
    NEXT:
    if (mainTank >= 5)
    {
        mainTank -= 5;
        dT += 50;
        if (additionalTank>0)
        {
            additionalTank--;
            mainTank++;
        }
        goto NEXT;
    }
    if ((mainTank>=0) && (mainTank < 5))
    {
        dT += (mainTank * 10);
    }
    return dT;
}

/*
Input 1: mainTank = 5, additionalTank = 10
Output 1: 60

Input 2: mainTank = 1, additionalTank = 2
Output 2: 10

Input 3: mainTank = 9, additionalTank = 1
Output 3: 100
*/