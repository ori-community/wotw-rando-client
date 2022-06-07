#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::TerrainData {
    IL2CPP_REGISTER_METHOD(0x02566970, float, GetInterpolatedHeight, (app::TerrainData * this_ptr, float f, float f1))
    IL2CPP_REGISTER_METHODINFO(0x04734CC0, TerrainData_GetInterpolatedHeight__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TerrainData * this_ptr))
}
