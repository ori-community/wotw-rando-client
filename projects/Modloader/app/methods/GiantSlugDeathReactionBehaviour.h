#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GiantSlugDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x007F2CD0, int32_t, get_RandomIndex, (app::GiantSlugDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F2E20, void, OnInitializeTask, (app::GiantSlugDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x007F2E70, void, OnEnterTask, (app::GiantSlugDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x007F3020, void, SpawnSlug, (app::GiantSlugDeathReactionBehaviour * this_ptr, int32_t number))
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecuteTask, (app::GiantSlugDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::GiantSlugDeathReactionBehaviour * this_ptr))
} // namespace app::classes::GiantSlugDeathReactionBehaviour
