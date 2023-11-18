#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/PatrolBehaviour.h>

namespace app::classes::Moon::PatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x0064D930, app::Vector3, get_PatrolOrigin, (app::PatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064D950, void, set_PatrolOrigin, (app::PatrolBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00C33350, void, OnExecute, (app::PatrolBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (app::PatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33480, app::Locomotion*, get_Locomotion, (app::PatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::PatrolBehaviour * this_ptr))
} // namespace app::classes::Moon::PatrolBehaviour
