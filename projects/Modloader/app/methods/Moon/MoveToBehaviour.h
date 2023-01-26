#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoveToBehaviour.h>

namespace app::classes::Moon::MoveToBehaviour {
    IL2CPP_REGISTER_METHOD(0x0064D930, app::Vector3, get_TargetPosition, (app::MoveToBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (app::MoveToBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, get_TraversalSpeed, (app::MoveToBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111BFC0, void, set_TraversalSpeed, (app::MoveToBehaviour * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0111BFD0, void, OnExecute, (app::MoveToBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x0111C0A0, void, OnUpdateBehaviour, (app::MoveToBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111C150, void, OnEndBehaviour, (app::MoveToBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x0111C180, app::Locomotion*, get_Locomotion, (app::MoveToBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::MoveToBehaviour * this_ptr))
} // namespace app::classes::Moon::MoveToBehaviour
