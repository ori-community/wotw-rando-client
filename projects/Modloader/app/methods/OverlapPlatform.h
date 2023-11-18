#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OverlapPlatform.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::OverlapPlatform {
    IL2CPP_REGISTER_METHOD(0x00442AD0, void, FixedUpdate, (app::OverlapPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442BF0, void, Awake, (app::OverlapPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442CB0, void, Start, (app::OverlapPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442CC0, void, Serialize, (app::OverlapPlatform * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00442CE0, void, OnTriggerEnter, (app::OverlapPlatform * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00442DB0, void, OnTriggerStay, (app::OverlapPlatform * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00442E80, void, set_Activated, (app::OverlapPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Activated, (app::OverlapPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430C0, void, ctor, (app::OverlapPlatform * this_ptr))
} // namespace app::classes::OverlapPlatform
