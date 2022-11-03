#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AttachToVerletStructure {
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, ISuspendable_get_IsSuspended, (app::AttachToVerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519B0, void, ISuspendable_set_IsSuspended, (app::AttachToVerletStructure * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008519C0, app::SuspendableMask__Enum, ISuspendable_get_Mask, (app::AttachToVerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519D0, void, ISuspendable_set_Mask, (app::AttachToVerletStructure * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x008519E0, void, Awake, (app::AttachToVerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00851C70, void, IPhysicsUpdateHandler_OnUpdatePhysics, (app::AttachToVerletStructure * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00852930, void, ctor, (app::AttachToVerletStructure * this_ptr))
} // namespace app::classes::AttachToVerletStructure
