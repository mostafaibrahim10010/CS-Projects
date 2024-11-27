#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TV, VCR, Remote_Controller, CD_Player, Tape_Recorder;

    const float TV_Price = 400.00;
    const float VCR_Price = 220.00;
    const float Remote_Controller_Price = 35.20;
    const float CD_Player_Price = 300.00;
    const float Tape_Recorder_Price = 150.00;
    const float tax = 8.25 / 100.00;

    printf("How Many TVs Were Sold? ");
    scanf("%d", &TV);

    printf("How Many VCRs Were Sold? ");
    scanf("%d", &VCR);

    printf("How Many Remote Controllers Were Sold? ");
    scanf("%d", &Remote_Controller);

    printf("How Many CDs Were Sold? ");
    scanf("%d", &CD_Player);

    printf("How Many Tape Recorders Were Sold? ");
    scanf("%d", &Tape_Recorder);

    float TV_Total = TV * TV_Price;
    float VCR_Total = VCR * VCR_Price;
    float Remote_Controller_Total = Remote_Controller * Remote_Controller_Price;
    float CD_Player_Total = CD_Player * CD_Player_Price;
    float Tape_Recorder_Total = Tape_Recorder * Tape_Recorder_Price;

    float subtotal = TV_Total + VCR_Total + Remote_Controller_Total + CD_Player_Total + Tape_Recorder_Total;
    float tax_price = subtotal * tax;
    float total = subtotal + tax_price;

    // Display the formatted output
    printf("\nQTY     DESCRIPTION           UNIT PRICE     TOTAL PRICE\n");
    printf("---     -----------           ----------     -----------\n");
    printf("%-3d     %-20s $%8.2f      $%8.2f\n", TV, "TV", TV_Price, TV_Total);
    printf("%-3d     %-20s $%8.2f      $%8.2f\n", VCR, "VCR", VCR_Price, VCR_Total);
    printf("%-3d     %-20s $%8.2f      $%8.2f\n", Remote_Controller, "REMOTE CTRL", Remote_Controller_Price, Remote_Controller_Total);
    printf("%-3d     %-20s $%8.2f      $%8.2f\n", CD_Player, "CD PLAYER", CD_Player_Price, CD_Player_Total);
    printf("%-3d     %-20s $%8.2f      $%8.2f\n", Tape_Recorder, "TAPE RECORDER", Tape_Recorder_Price, Tape_Recorder_Total);

    printf("                                       -----------\n");
    printf("                              SUBTOTAL $%8.2f\n", subtotal);
    printf("                                   TAX $%8.2f\n", tax_price);
    printf("                                 TOTAL $%8.2f\n", total);

    return 0;
}
