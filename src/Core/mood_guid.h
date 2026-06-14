#pragma once

#include <Core/macros.h>
#include <functional>
#include <nlohmann/json.hpp>

#include <Modloader/app/structs/MoonGuid.h>

namespace core {
    struct CORE_DLLEXPORT MoodGuid {
        int A;
        int B;
        int C;
        int D;

        MoodGuid();
        MoodGuid(int a, int b, int c, int d);
        MoodGuid(app::MoonGuid* moon_guid);

        app::MoonGuid* to_moon_guid();
    };

    NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(MoodGuid, A, B, C, D);

    CORE_DLLEXPORT bool operator==(const MoodGuid& a, const MoodGuid& b);
    CORE_DLLEXPORT bool operator==(const MoodGuid& a, const app::MoonGuid& b);
    CORE_DLLEXPORT bool operator!=(const MoodGuid& a, const MoodGuid& b);
    CORE_DLLEXPORT bool operator!=(const MoodGuid& a, const app::MoonGuid& b);
} // namespace core

template <>
struct std::hash<core::MoodGuid> {
    std::size_t operator()(const core::MoodGuid& g) const {
        return hash<int>()(g.A) ^ (hash<int>()(g.B) << 1) ^ (hash<int>()(g.C) << 2) ^ (hash<int>()(g.D) << 3);
    }
};