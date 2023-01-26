#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundMoveInDirectionBehaviour.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/Locomotion.h>

namespace app::classes::Moon::GroundMoveInDirectionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_MoveLeft, (app::GroundMoveInDirectionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_MoveLeft, (app::GroundMoveInDirectionBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00608710, int32_t, get_TraversalSpeed, (app::GroundMoveInDirectionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00608720, void, set_TraversalSpeed, (app::GroundMoveInDirectionBehaviour * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x008693A0, float, get_MinDuration, (app::GroundMoveInDirectionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C8D30, void, set_MinDuration, (app::GroundMoveInDirectionBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0064D960, float, get_MaxDuration, (app::GroundMoveInDirectionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064D970, void, set_MaxDuration, (app::GroundMoveInDirectionBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x014916B0, void, OnExecute, (app::GroundMoveInDirectionBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x014917F0, void, OnUpdateBehaviour, (app::GroundMoveInDirectionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014918E0, void, OnEndBehaviour, (app::GroundMoveInDirectionBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x01491910, app::Locomotion*, get_Locomotion, (app::GroundMoveInDirectionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::GroundMoveInDirectionBehaviour * this_ptr))
} // namespace app::classes::Moon::GroundMoveInDirectionBehaviour
