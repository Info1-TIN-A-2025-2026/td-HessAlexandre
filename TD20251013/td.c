#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{

    int d1 = 0, d2 = 0, x = 0;
    double S0 = 0;                  // prix de l'action
    long C = 0;                     // call price
    long K = 0;                     // strike price
    short T = 0;                    // time duration (days)
    int const s = 0.274, r = 0.015; // volatility and taux interets
    double const a1 = 0.319381530, a2 = -0.356563782, a3 = 1.781477937, a4 = -1.821255978, a5 = 1.330274429;

    printf("Veuillez entrer le prix de l'action: \n");
    scanf("%f", &S0);
    printf("Veuiller entrer le prix du strike \n");
    scanf("%f", &K);
    printf("Veuillez entrer le nombre de jours jusqu'à l'expiration du contrat: \n");
    scanf("%f", &T);
    if (S0 = < 0)
    {
        printf("Valeur impossible ! (S0 Négative/Nul)\n");
    }
    else if (K = < 0)
    {
        printf("Valeur impossible ! (K négatif/nul)\n");
    }
    else if (T = < 0)
    {
        printf("Valeur impossible (T Négatif/nul)\n");
    }

    // Duration Calcul (Days => Years)

    T = T / 365;

    // calculations

    d1 = (1 / (s * (sqrt(T)))) * ((log(S0 / K) + (T + 1 / 2 * pow(s, 2)) * T));
    d2 = d1 - s * sqrt(T);
    // Inclure ici N1 & N2
    C = S0 * (N1 * d1) - K * e(exp - r, T) * N2 * d2;

    n(x) = exp(-pow(x, 2) / 2) / sqrt(2 * M_PI);
}