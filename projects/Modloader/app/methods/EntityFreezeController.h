#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityFreezeController.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::EntityFreezeController {
    IL2CPP_REGISTER_METHOD(0x00C90FE0, void, Awake, (app::EntityFreezeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C91310, void, OnDestroy, (app::EntityFreezeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C91500, void, OnModifyDamage, (app::EntityFreezeController * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHODINFO(0x0470B330, EntityFreezeController_OnModifyDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C91660, void, FixedUpdate, (app::EntityFreezeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C917A0, void, Freeze, (app::EntityFreezeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C918C0, void, Unfreeze, (app::EntityFreezeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (app::EntityFreezeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (app::EntityFreezeController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00608710, app::SuspendableMask__Enum, get_Mask, (app::EntityFreezeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C919E0, void, set_Mask, (app::EntityFreezeController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00C91A90, void, ctor, (app::EntityFreezeController * this_ptr))
} // namespace app::classes::EntityFreezeController
