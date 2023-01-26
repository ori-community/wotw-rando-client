#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TerrainData.h>

namespace app::classes::Moon::TerrainData {
    IL2CPP_REGISTER_METHOD(0x02566970, float, GetInterpolatedHeight, (app::TerrainData * this_ptr, float f, float f1))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TerrainData * this_ptr))
} // namespace app::classes::Moon::TerrainData
