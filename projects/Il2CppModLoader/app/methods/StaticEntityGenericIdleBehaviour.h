#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StaticEntityGenericIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x009B6360, void, OnEnterTask, (app::StaticEntityGenericIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009B6420, void, PlayIdle, (app::StaticEntityGenericIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::StaticEntityGenericIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009B6590, void, OnExitTask, (app::StaticEntityGenericIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::StaticEntityGenericIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::StaticEntityGenericIdleBehaviour * this_ptr))
}
