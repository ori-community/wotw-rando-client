#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WandererPostIntroductionPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x008D2350, void, OnEntityInitialized, (app::WandererPostIntroductionPatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C6BC0, void, OnEnter, (app::WandererPostIntroductionPatrolBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecute, (app::WandererPostIntroductionPatrolBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, (app::WandererPostIntroductionPatrolBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::WandererPostIntroductionPatrolBehaviour * this_ptr))
}
