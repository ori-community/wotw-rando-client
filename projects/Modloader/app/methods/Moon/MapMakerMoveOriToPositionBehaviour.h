#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MapMakerMoveOriToPositionBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::MapMakerMoveOriToPositionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0110EC90, void, OnEnter, (app::MapMakerMoveOriToPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0110ED80, app::BehaviourStatus__Enum, OnExecute, (app::MapMakerMoveOriToPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0110EDB0, void, OnExit, (app::MapMakerMoveOriToPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::MapMakerMoveOriToPositionBehaviour * this_ptr))
} // namespace app::classes::Moon::MapMakerMoveOriToPositionBehaviour
