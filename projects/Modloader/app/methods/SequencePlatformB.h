#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SequencePlatformB.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::SequencePlatformB {
    IL2CPP_REGISTER_METHOD(0x00AB7340, void, SetToAppear, (app::SequencePlatformB * this_ptr, float delay))
    IL2CPP_REGISTER_METHOD(0x00AB7360, void, set_Activated, (app::SequencePlatformB * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00AB7980, bool, get_Activated, (app::SequencePlatformB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB7990, void, Awake, (app::SequencePlatformB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB7AC0, void, OnDestroy, (app::SequencePlatformB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB7B60, void, Start, (app::SequencePlatformB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB7BB0, bool, get_CollidersShouldDisable, (app::SequencePlatformB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB7BF0, void, FixedUpdate, (app::SequencePlatformB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB7F40, void, OnCollisionEnter, (app::SequencePlatformB * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00AB80E0, void, Serialize, (app::SequencePlatformB * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (app::SequencePlatformB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (app::SequencePlatformB * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0057A5A0, app::SuspendableMask__Enum, get_Mask, (app::SequencePlatformB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB8220, void, set_Mask, (app::SequencePlatformB * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00AB82E0, void, ctor, (app::SequencePlatformB * this_ptr))
} // namespace app::classes::SequencePlatformB
