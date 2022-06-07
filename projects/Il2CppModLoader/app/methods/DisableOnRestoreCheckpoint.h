#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DisableOnRestoreCheckpoint {
    IL2CPP_REGISTER_METHOD(0x00B983A0, void, Awake, (app::DisableOnRestoreCheckpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98540, void, OnDestroy, (app::DisableOnRestoreCheckpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, OnRestoreCheckpoint, (app::DisableOnRestoreCheckpoint * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705028, DisableOnRestoreCheckpoint_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DisableOnRestoreCheckpoint * this_ptr))
}
