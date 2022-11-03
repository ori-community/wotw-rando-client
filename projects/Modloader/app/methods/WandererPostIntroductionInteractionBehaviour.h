#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WandererPostIntroductionInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x008D1EC0, void, OnEntityInitialized, (app::WandererPostIntroductionInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C6BC0, void, OnEnter, (app::WandererPostIntroductionInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008D2050, app::BehaviourStatus__Enum, OnExecute, (app::WandererPostIntroductionInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, (app::WandererPostIntroductionInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::WandererPostIntroductionInteractionBehaviour * this_ptr))
} // namespace app::classes::WandererPostIntroductionInteractionBehaviour
