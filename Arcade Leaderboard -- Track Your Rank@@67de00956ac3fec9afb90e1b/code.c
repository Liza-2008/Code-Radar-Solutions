#include <stdio.h>

// Function Prototype (Declaration)
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]);

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int ranks[n]; 
    int rank = 1;

    // Assign ranks to the leaderboard
    ranks[0] = rank;
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1])
            ranks[i] = rank;
        else
            ranks[i] = ++rank;
    }

    int i = n - 1, j = 0; // i for leaderboard, j for player's scores
    while (j < m) {
        while (i >= 0 && player[j] >= ranked[i])
            i--;

        result[j] = (i == -1) ? 1 : ranks[i] + 1;
        j++;
    }
}

int main() {
    int n, m;

    // Read leaderboard size and scores
    scanf("%d", &n);
    int ranked[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ranked[i]);

    // Read number of player's games and scores
    scanf("%d", &m);
    int player[m], result[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &player[i]);

    // Compute ranks
    trackPlayerRanks(ranked, n, player, m, result);

    // Print results
    for (int i = 0; i < m; i++)
        printf("%d\n", result[i]);

    return 0;
}
