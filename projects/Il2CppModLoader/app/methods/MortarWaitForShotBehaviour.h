#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MortarWaitForShotBehaviour {
    IL2CPP_REGISTER_METHOD(0x0147F7E0, void, OnEntityInitialized, (app::MortarWaitForShotBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147F890, void, OnEnter, (app::MortarWaitForShotBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0147F8C0, app::BehaviourStatus__Enum, OnExecute, (app::MortarWaitForShotBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F15500, void, OnExit, (app::MortarWaitForShotBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0147F9C0, void, ctor, (app::MortarWaitForShotBehaviour * this_ptr))
}
