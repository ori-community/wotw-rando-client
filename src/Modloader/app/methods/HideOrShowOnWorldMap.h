#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HideOrShowOnWorldMap.h>

namespace app::classes::HideOrShowOnWorldMap {
    IL2CPP_REGISTER_METHOD(0x00B4A6C0, void, Start, app::HideOrShowOnWorldMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4A9A0, void, OnDrawGizmos, app::HideOrShowOnWorldMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::HideOrShowOnWorldMap* this_ptr)
} // namespace app::classes::HideOrShowOnWorldMap
