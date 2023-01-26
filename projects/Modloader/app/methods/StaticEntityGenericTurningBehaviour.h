#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StaticEntityGenericTurningBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::StaticEntityGenericTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_TargetLookDirectionX, (app::StaticEntityGenericTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_TargetLookDirectionX, (app::StaticEntityGenericTurningBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003FD740, float, get_CurrentTurningDirection, (app::StaticEntityGenericTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B65C0, void, OnInitializeTask, (app::StaticEntityGenericTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009B6710, bool, get_IsPlaying, (app::StaticEntityGenericTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B67F0, void, OnEnterTask, (app::StaticEntityGenericTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009B6A00, void, PlayAnimation, (app::StaticEntityGenericTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B6C80, void, TurningFinished, (app::StaticEntityGenericTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D2CA0, app::BehaviourStatus__Enum, OnExecuteTask, (app::StaticEntityGenericTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009B6E80, bool, ShouldEndBehaviour, (app::StaticEntityGenericTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::StaticEntityGenericTurningBehaviour * this_ptr))
} // namespace app::classes::StaticEntityGenericTurningBehaviour
