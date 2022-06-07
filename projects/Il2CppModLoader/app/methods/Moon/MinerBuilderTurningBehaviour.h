#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MinerBuilderTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x01119220, void, OnEnterTask, (app::MinerBuilderTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01119410, app::BehaviourStatus__Enum, OnExecuteTask, (app::MinerBuilderTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00D201A0, void, ctor, (app::MinerBuilderTurningBehaviour * this_ptr))
}
