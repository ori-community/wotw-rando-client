#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StatisticsManager_RuntimeStatEntry {
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DirtyValue, (app::StatisticsManager_RuntimeStatEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DirtyValue, (app::StatisticsManager_RuntimeStatEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StatisticsManager_RuntimeStatEntry * this_ptr))
}
