#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LizardScreamBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::LizardScreamBehaviour {
    IL2CPP_REGISTER_METHOD(0x00FB2330, void, OnEnter, (app::LizardScreamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009555D0, void, OnExit, (app::LizardScreamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB24C0, void, ScreamFinished, (app::LizardScreamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770D18, LizardScreamBehaviour_ScreamFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FB24D0, app::BehaviourStatus__Enum, OnExecute, (app::LizardScreamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F155A0, void, ctor, (app::LizardScreamBehaviour * this_ptr))
} // namespace app::classes::LizardScreamBehaviour
