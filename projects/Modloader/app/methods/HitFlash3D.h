#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_HitFlash3D_Flash_.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/HitFlash3D.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::HitFlash3D {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_HitFlash3D_Flash_*, get_Entries, (app::HitFlash3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B561A0, void, Awake, (app::HitFlash3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B56240, void, PlayFlash_1, (app::HitFlash3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B56390, void, PlayFlash_2, (app::HitFlash3D * this_ptr, app::Vector3 pos))
    IL2CPP_REGISTER_METHOD(0x00B564E0, void, GatherEntries, (app::HitFlash3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B56960, void, OnReceiveEvent, (app::HitFlash3D * this_ptr, app::EntityEvent* event_info))
    IL2CPP_REGISTER_METHOD(0x00B56AD0, void, ctor, (app::HitFlash3D * this_ptr))
} // namespace app::classes::HitFlash3D
