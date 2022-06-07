#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpikeSlugKickUpReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x011D0C90, bool, get_ShouldLetGoOfSurface, (app::SpikeSlugKickUpReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB6450, bool, get_ShouldSkipUpdate, (app::SpikeSlugKickUpReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D0CC0, void, OnEnterTask, (app::SpikeSlugKickUpReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011D10B0, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpikeSlugKickUpReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::SpikeSlugKickUpReactionBehaviour * this_ptr))
}
