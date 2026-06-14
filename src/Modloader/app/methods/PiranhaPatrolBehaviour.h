#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PiranhaPatrolBehaviour.h>
#include <Modloader/app/structs/SwimmingLocomotion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PiranhaPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x01162FD0, int32_t, get_RandomIndex, app::PiranhaPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011630B0, int32_t, get_RandomIndexOffset, app::PiranhaPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01016990, void, set_RandomIndexOffset, app::PiranhaPatrolBehaviour* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x011630F0, app::SwimmingLocomotion*, get_Locomotion, app::PiranhaPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011631D0, void, OnEntityInitialized, app::PiranhaPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01163280, void, OnEnter, app::PiranhaPatrolBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011636A0, void, OnExit, app::PiranhaPatrolBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x006B33C0, void, OnWontReachTarget, app::PiranhaPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011636E0, void, CalculateTargetOffsets, app::PiranhaPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01163F40,
        bool,
        TryCalculateTargetPosition,
        app::PiranhaPatrolBehaviour* this_ptr,
        int32_t longtitude_index,
        int32_t latitude_index,
        app::Vector3* move_target
    )
    IL2CPP_REGISTER_METHOD(0x011645B0, app::BehaviourStatus__Enum, OnExecute, app::PiranhaPatrolBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011646E0, void, OnDrawGizmos, app::PiranhaPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01164980, void, ctor, app::PiranhaPatrolBehaviour* this_ptr)
} // namespace app::classes::PiranhaPatrolBehaviour
