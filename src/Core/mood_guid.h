#pragma once

#include <Core/macros.h>
#include <functional>
#include <nlohmann/json.hpp>

#include <Modloader/app/structs/MoonGuid.h>

namespace core {
    struct CORE_DLLEXPORT MoodGuid {
        uint32_t A;
        uint32_t B;
        uint32_t C;
        uint32_t D;

        MoodGuid();
        MoodGuid(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
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
