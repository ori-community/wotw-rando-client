#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpikeSlugFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x011CCD70, app::SpikeSlugLocomotion*, get_Locomotion, (app::SpikeSlugFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011CCE30, void, OnInitializeTask, (app::SpikeSlugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011CCFD0, void, OnEnterTask, (app::SpikeSlugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011CD150, void, OnExitTask, (app::SpikeSlugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011CD200, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpikeSlugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011CD390, void, OnEnterLand, (app::SpikeSlugFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011CD460, void, ctor, (app::SpikeSlugFallReactionBehaviour * this_ptr))
} // namespace app::classes::SpikeSlugFallReactionBehaviour
