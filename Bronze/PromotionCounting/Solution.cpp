#include <stdio.h>

int main() {
    int bronze_before, bronze_after;
    int silver_before, silver_after;
    int gold_before, gold_after;
    int plat_before, plat_after;

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    scanf("%d %d", &bronze_before, &bronze_after);
    scanf("%d %d", &silver_before, &silver_after);
    scanf("%d %d", &gold_before, &gold_after);
    scanf("%d %d", &plat_before, &plat_after);

    int gold_to_plat = plat_after - plat_before;
    int silver_to_gold = (gold_after - gold_before) + gold_to_plat;
    int bronze_to_silver = (silver_after - silver_before) + silver_to_gold;

    printf("%d\n", bronze_to_silver);
    printf("%d\n", silver_to_gold);
    printf("%d\n", gold_to_plat);

    return 0;
}
// Github : https://github.com/RaqeebDev
// Problem Link : https://usaco.org/index.php?page=viewproblem2&cpid=591
