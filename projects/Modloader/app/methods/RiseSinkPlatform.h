#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RiseSinkPlatform.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::RiseSinkPlatform {
    IL2CPP_REGISTER_METHOD(0x01355070, void, Awake, (app::RiseSinkPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01355110, void, OnDestroy, (app::RiseSinkPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013551B0, void, Start, (app::RiseSinkPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01355240, void, OnCollisionStay, (app::RiseSinkPlatform * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x01355340, void, FixedUpdate, (app::RiseSinkPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01355820, void, Serialize, (app::RiseSinkPlatform * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (app::RiseSinkPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (app::RiseSinkPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD750, app::SuspendableMask__Enum, get_Mask, (app::RiseSinkPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013559D0, void, set_Mask, (app::RiseSinkPlatform * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01355A80, void, ctor, (app::RiseSinkPlatform * this_ptr))
} // namespace app::classes::RiseSinkPlatform
