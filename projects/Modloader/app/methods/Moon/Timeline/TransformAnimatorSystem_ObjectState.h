#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ObjectState.h>
#include <Modloader/app/structs/Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_.h>
#include <Modloader/app/structs/Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_.h>

namespace app::classes::Moon::Timeline::TransformAnimatorSystem_ObjectState {
    IL2CPP_REGISTER_METHOD(0x0311F8F0, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_*, get_HandoverPosition, (app::TransformAnimatorSystem_ObjectState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311F900, void, SetHandoverPosition, (app::TransformAnimatorSystem_ObjectState * this_ptr, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_* value))
    IL2CPP_REGISTER_METHOD(0x0311F9A0, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_*, get_HandoverRotation, (app::TransformAnimatorSystem_ObjectState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311F9B0, void, SetHandoverRotation, (app::TransformAnimatorSystem_ObjectState * this_ptr, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_* value))
    IL2CPP_REGISTER_METHOD(0x0311FA50, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_*, get_HandoverScale, (app::TransformAnimatorSystem_ObjectState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311FA60, void, SetHandoverScale, (app::TransformAnimatorSystem_ObjectState * this_ptr, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_* value))
    IL2CPP_REGISTER_METHOD(0x0311FB00, bool, ContainsHandoverValue, (app::TransformAnimatorSystem_ObjectState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311FBA0, void, InvalidateHandoversForNextFrame, (app::TransformAnimatorSystem_ObjectState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311FBC0, void, KillInvalidHandovers, (app::TransformAnimatorSystem_ObjectState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311FC40, void, Reset, (app::TransformAnimatorSystem_ObjectState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TransformAnimatorSystem_ObjectState * this_ptr))
} // namespace app::classes::Moon::Timeline::TransformAnimatorSystem_ObjectState
