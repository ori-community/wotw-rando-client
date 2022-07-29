#pragma once

#include <functional>

namespace utils {
    struct MoodGuid {
        int A;
        int B;
        int C;
        int D;

        MoodGuid(int a, int b, int c, int d);
        MoodGuid(app::MoonGuid* moon_guid);

        app::MoonGuid* to_moon_guid();
    };

    bool operator==(const MoodGuid& a, const MoodGuid& b);
    bool operator==(const MoodGuid& a, const app::MoonGuid& b);
    bool operator!=(const MoodGuid& a, const MoodGuid& b);
    bool operator!=(const MoodGuid& a, const app::MoonGuid& b);
}

template<>
struct std::hash<utils::MoodGuid>
{
    std::size_t operator()(const utils::MoodGuid& g) const
    {
        return hash<int>()(g.A) ^ (hash<int>()(g.B) << 1) ^ (hash<int>()(g.C) << 2) ^ (hash<int>()(g.D) << 3);
    }
};