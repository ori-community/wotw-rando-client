#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SandWormReturnToSandBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector2__Array.h>

namespace app::classes::SandWormReturnToSandBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C20C70, void, OnEntityInitialized, (app::SandWormReturnToSandBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C20D20, void, OnEnter, (app::SandWormReturnToSandBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C21220, bool, DoRaycastsForNewTargetPosition, (app::SandWormReturnToSandBehaviour * this_ptr, app::Vector2__Array* directions_to_check, float target_position_depth))
    IL2CPP_REGISTER_METHOD(0x00C21600, bool, TryToFindNewTarget, (app::SandWormReturnToSandBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C21E30, app::BehaviourStatus__Enum, OnExecute, (app::SandWormReturnToSandBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SandWormReturnToSandBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C225C0, void, Kill, (app::SandWormReturnToSandBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C227A0, bool, IsFullyInSand, (app::SandWormReturnToSandBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C22870, bool, IsFullOutsideSand, (app::SandWormReturnToSandBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C22A50, void, ctor, (app::SandWormReturnToSandBehaviour * this_ptr))
} // namespace app::classes::SandWormReturnToSandBehaviour
