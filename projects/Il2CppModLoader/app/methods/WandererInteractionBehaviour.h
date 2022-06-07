#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WandererInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x008C8600, void, OnEntityInitialized, (app::WandererInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C6BC0, void, OnEnter, (app::WandererInteractionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008C8790, app::BehaviourStatus__Enum, OnExecute, (app::WandererInteractionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, (app::WandererInteractionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008C8AA0, void, ctor, (app::WandererInteractionBehaviour * this_ptr))
}
