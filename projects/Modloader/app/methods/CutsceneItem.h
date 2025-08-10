#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CutsceneItem.h>

namespace app::classes::CutsceneItem {
    IL2CPP_REGISTER_METHOD(0x00DBE690, bool, get_IsLocked, app::CutsceneItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBE750, void, Awake, app::CutsceneItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBE8D0, void, OnPressed, app::CutsceneItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBE9A0, void, OnEnable, app::CutsceneItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBEAF0, void, FixedUpdate, app::CutsceneItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CutsceneItem* this_ptr)
} // namespace app::classes::CutsceneItem
