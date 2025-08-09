#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IRng.h>
#include <Modloader/app/structs/Stack_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/TerrainMesherData.h>
#include <Modloader/app/structs/TerrainMesherSettings.h>
#include <Modloader/app/structs/TerrainMesher_TerrainProxy.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::TerrainMesher {
    IL2CPP_REGISTER_METHOD(0x025669C0, void, ProcessTerrain, app::TerrainMesherData data)
    IL2CPP_REGISTER_METHOD(
        0x02566A30,
        void,
        SubDivide,
        app::Stack_1_UnityEngine_Vector3_* vertices,
        app::TerrainMesher_TerrainProxy* terrain,
        app::TerrainMesherSettings settings,
        int32_t subdivision_count,
        app::IRng* rng
    )
    IL2CPP_REGISTER_METHOD(
        0x02566B80,
        bool,
        ShouldSubdivide,
        app::Vector3 a,
        app::Vector3 b,
        app::Vector3 c,
        app::TerrainMesher_TerrainProxy* terrain,
        app::TerrainMesherSettings settings,
        app::IRng* rng
    )
    IL2CPP_REGISTER_METHOD(0x02566EA0, app::Vector3, RandomPointInsideTriangle, app::Vector3 a, app::Vector3 b, app::Vector3 c, app::IRng* rng)
    IL2CPP_REGISTER_METHOD(0x025672F0, app::Vector2, UniformSampleTriangle, app::Vector2 u)
} // namespace app::classes::Moon::TerrainMesher
