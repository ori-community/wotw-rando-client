#pragma once

namespace utils {
    struct MoodGuid {
        int A;
        int B;
        int C;
        int D;

        MoodGuid(int a, int b, int c, int d);
    };
}

bool operator==(const utils::MoodGuid& a, const app::MoonGuid& b);
bool operator!=(const utils::MoodGuid& a, const app::MoonGuid& b);