#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "Lovely - Billy Eyelish",
    "I found peace in your voilence",
    "Satisfya",
    "I've got guns in my head and they won't go"
};

void find_track(char search_track[]) {
    int arr_len = sizeof(tracks) / sizeof(tracks[0]);

    for (int i = 0; i < arr_len; i++) {
        if (strstr(tracks[i], search_track))
            printf("Track %i: %s\n", i, tracks[i]);
    }
}

int main() {
    char search_track[80];
    puts("Search for track: \n");
    fgets(search_track, 80, stdin);

    // Removed newline character
    search_track[strcspn(search_track, "\n")] = '\0';

    find_track(search_track);

    return 0;
}

