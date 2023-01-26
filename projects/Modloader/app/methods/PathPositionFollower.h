#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PathPositionFollower.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::PathPositionFollower {
    IL2CPP_REGISTER_METHOD(0x004486A0, void, Awake, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00448740, void, OnDestroy, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004487E0, void, OnValidate, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004487E0, void, ApplySettings, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00448840, void, Start, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00448A70, void, FixedUpdate, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00448D80, void, ResetToNode, (app::PathPositionFollower * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00448ED0, void, Serialize, (app::PathPositionFollower * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00448FF0, bool, get_IsSuspended, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449000, void, set_IsSuspended, (app::PathPositionFollower * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF3C0, app::SuspendableMask__Enum, get_Mask, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449010, void, set_Mask, (app::PathPositionFollower * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x004490C0, app::Bounds, get_Bounds, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004490E0, void, OnDrawGizmosSelected, (app::PathPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449350, void, ctor, (app::PathPositionFollower * this_ptr))
} // namespace app::classes::PathPositionFollower
