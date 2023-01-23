#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SkeetoDeathReaction.h>
#include <Modloader/app/structs/SkeetoFallingReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SkeetoFallingReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00756A30, app::SkeetoDeathReaction*, get_DeathReaction, (app::SkeetoFallingReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00756A40, void, set_DeathReaction, (app::SkeetoFallingReactionBehaviour * this_ptr, app::SkeetoDeathReaction* value))
    IL2CPP_REGISTER_METHOD(0x00756A50, void, OnInitializeTask, (app::SkeetoFallingReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00756B90, void, OnEnterFalling, (app::SkeetoFallingReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00756BD0, void, LandUpdate, (app::SkeetoFallingReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00756D90, void, OnEndLand, (app::SkeetoFallingReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00756F90, void, ctor, (app::SkeetoFallingReactionBehaviour * this_ptr))
} // namespace app::classes::SkeetoFallingReactionBehaviour
