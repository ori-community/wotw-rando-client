#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/GroundPatrolMode__Enum.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviour.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::GroundPatrolWithDirectionBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FF610, app::GroundPatrolMode__Enum, get_PatrolMode, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_PatrolMode, app::GroundPatrolWithDirectionBehaviour* this_ptr, app::GroundPatrolMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x00608710, app::GroundPatrolDirectionMode__Enum, get_PatrolDirectionMode, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00608720,
        void,
        set_PatrolDirectionMode,
        app::GroundPatrolWithDirectionBehaviour* this_ptr,
        app::GroundPatrolDirectionMode__Enum value
    )
    IL2CPP_REGISTER_METHOD(0x01494130, app::Vector3, get_PatrolOrigin, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01494150, void, set_PatrolOrigin, app::GroundPatrolWithDirectionBehaviour* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00623260, float, get_MaxPatrolRadius, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00623270, void, set_MaxPatrolRadius, app::GroundPatrolWithDirectionBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x007F58D0, float, get_MinIdleInterval, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007F58E0, void, set_MinIdleInterval, app::GroundPatrolWithDirectionBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0132F750, float, get_MaxIdleInterval, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01292100, void, set_MaxIdleInterval, app::GroundPatrolWithDirectionBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x003FC020, float, get_MinMovingInterval, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FC030, void, set_MinMovingInterval, app::GroundPatrolWithDirectionBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_MaxMovingInterval, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_MaxMovingInterval, app::GroundPatrolWithDirectionBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_StartWithMoving, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B11500, void, set_StartWithMoving, app::GroundPatrolWithDirectionBehaviour* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TraversalSpeed, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_TraversalSpeed, app::GroundPatrolWithDirectionBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01494160, app::Vector2, get_MovingDirection, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014942E0, void, OnInitialize, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01494380, void, OnExecute, app::GroundPatrolWithDirectionBehaviour* this_ptr, app::IBlackboard* blackboard)
    IL2CPP_REGISTER_METHOD(0x01494570, void, UpdateDirection, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014945A0, void, StartIdle, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01494690, void, UpdateIdle, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01494750, void, StartMoving, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01494840, void, UpdateMoving, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014948E0, void, OnUpdateBehaviour, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01494BA0, bool, KeepMoving, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01494DF0, void, ChangePatrolDirection, app::GroundPatrolWithDirectionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01494E30, void, OnEndBehaviour, app::GroundPatrolWithDirectionBehaviour* this_ptr, app::EntityBehaviourStatus__Enum reason)
    IL2CPP_REGISTER_METHOD(
        0x01494EE0,
        bool,
        PointInsideSphere,
        app::GroundPatrolWithDirectionBehaviour* this_ptr,
        app::Vector3 point,
        app::Vector3 center,
        float radius
    )
    IL2CPP_REGISTER_METHOD(0x01494FD0, void, ctor, app::GroundPatrolWithDirectionBehaviour* this_ptr)
} // namespace app::classes::Moon::GroundPatrolWithDirectionBehaviour
