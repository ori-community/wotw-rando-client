#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Letterbox_1.h>

namespace app::classes::Letterbox {
    IL2CPP_REGISTER_METHOD(0x01131EA0, void, Awake, app::Letterbox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01132150, void, OnDestroy, app::Letterbox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01132400, void, OnRestoreCheckpoint, app::Letterbox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011324A0, void, OnGameReset, app::Letterbox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01132540, void, Start, app::Letterbox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Letterbox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Letterbox
