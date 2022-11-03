#pragma once

#include <functional>
#include <Core/macros.h>

namespace utils {
    struct CORE_DLLEXPORT MoodGuid {
        int A;
        int B;
        int C;
        int D;

        MoodGuid(int a, int b, int c, int d);
        MoodGuid(app::MoonGuid* moon_guid);

        app::MoonGuid* to_moon_guid();
    };

    CORE_DLLEXPORT bool operator==(const MoodGuid& a, const MoodGuid& b);
    CORE_DLLEXPORT bool operator==(const MoodGuid& a, const app::MoonGuid& b);
    CORE_DLLEXPORT bool operator!=(const MoodGuid& a, const MoodGuid& b);
    CORE_DLLEXPORT bool operator!=(const MoodGuid& a, const app::MoonGuid& b);
} // namespace utils

template <>
struct std::hash<utils::MoodGuid> {
    std::size_t operator()(const utils::MoodGuid& g) const {
        return hash<int>()(g.A) ^ (hash<int>()(g.B) << 1) ^ (hash<int>()(g.C) << 2) ^ (hash<int>()(g.D) << 3);
    }
};