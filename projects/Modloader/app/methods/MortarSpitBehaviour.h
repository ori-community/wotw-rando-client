#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MortarSpitBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::MortarSpitBehaviour {
    IL2CPP_REGISTER_METHOD(0x0147E890, void, OnEntityInitialized, (app::MortarSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147EB60, void, OnEnter, (app::MortarSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0147EF30, app::BehaviourStatus__Enum, OnExecute, (app::MortarSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0147EF80, void, OnExit, (app::MortarSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0147EFC0, void, Spit, (app::MortarSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047063B8, MortarSpitBehaviour_Spit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0147F750, void, ctor, (app::MortarSpitBehaviour * this_ptr))
} // namespace app::classes::MortarSpitBehaviour
