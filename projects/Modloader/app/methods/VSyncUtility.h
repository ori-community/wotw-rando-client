#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VSyncUtility.h>

namespace app::classes::VSyncUtility {
    IL2CPP_REGISTER_METHOD(0x00482AA0, int32_t, get_vSyncCount, ())
    IL2CPP_REGISTER_METHOD(0x013B7CA0, void, set_vSyncCount, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x013B7D80, void, OverrideVsyncCount, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::VSyncUtility * this_ptr))
} // namespace app::classes::VSyncUtility
