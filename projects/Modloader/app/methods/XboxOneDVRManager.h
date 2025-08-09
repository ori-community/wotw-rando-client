#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XboxOneDVRManager.h>

namespace app::classes::XboxOneDVRManager {
    IL2CPP_REGISTER_METHOD(0x00597E70, void, Awake, app::XboxOneDVRManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597F00, void, OnDestroy, app::XboxOneDVRManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597F80, void, RecordPastDelayed, float delay, float past, app::String* clip)
    IL2CPP_REGISTER_METHOD(0x005980B0, void, Update, app::XboxOneDVRManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::XboxOneDVRManager* this_ptr)
} // namespace app::classes::XboxOneDVRManager
