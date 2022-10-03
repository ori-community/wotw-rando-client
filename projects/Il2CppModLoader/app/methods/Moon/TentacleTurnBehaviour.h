#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TentacleTurnBehaviour {
    IL2CPP_REGISTER_METHOD(0x010BAEF0, void, OnInitializeTask, (app::TentacleTurnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010BAFE0, void, TurnOffSprings, (app::TentacleTurnBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F298, TentacleTurnBehaviour_TurnOffSprings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010BB130, void, ResetJoints, (app::TentacleTurnBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793238, TentacleTurnBehaviour_ResetJoints__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010BB180, void, OnEnterTask, (app::TentacleTurnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010BB4A0, app::BehaviourStatus__Enum, OnExecuteTask, (app::TentacleTurnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010BB750, void, OnExitTask, (app::TentacleTurnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010BBAE0, void, ctor, (app::TentacleTurnBehaviour * this_ptr))
} // namespace app::classes::Moon::TentacleTurnBehaviour
