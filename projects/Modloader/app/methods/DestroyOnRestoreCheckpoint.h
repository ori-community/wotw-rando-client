#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DestroyOnRestoreCheckpoint {
    IL2CPP_REGISTER_METHOD(0x00B8CAD0, void, Awake, (app::DestroyOnRestoreCheckpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8CC90, void, OnDestroy, (app::DestroyOnRestoreCheckpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8CE20, void, OnRestoreCheckpoint, (app::DestroyOnRestoreCheckpoint * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047961E8, DestroyOnRestoreCheckpoint_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DestroyOnRestoreCheckpoint * this_ptr))
} // namespace app::classes::DestroyOnRestoreCheckpoint
