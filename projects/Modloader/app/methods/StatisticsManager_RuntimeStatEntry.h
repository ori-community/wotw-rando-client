#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry.h>

namespace app::classes::StatisticsManager_RuntimeStatEntry {
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DirtyValue, (app::StatisticsManager_RuntimeStatEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DirtyValue, (app::StatisticsManager_RuntimeStatEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StatisticsManager_RuntimeStatEntry * this_ptr))
} // namespace app::classes::StatisticsManager_RuntimeStatEntry
