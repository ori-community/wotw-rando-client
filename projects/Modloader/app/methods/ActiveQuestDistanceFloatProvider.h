#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActiveQuestDistanceFloatProvider.h>

namespace app::classes::ActiveQuestDistanceFloatProvider {
    IL2CPP_REGISTER_METHOD(0x004C99B0, float, GetFloatValue, app::ActiveQuestDistanceFloatProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ActiveQuestDistanceFloatProvider* this_ptr)
} // namespace app::classes::ActiveQuestDistanceFloatProvider
