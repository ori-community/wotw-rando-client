#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CrabLungeAttackBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::CrabLungeAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00CCCED0, void, OnEnter, (app::CrabLungeAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCD090, void, OnExit, (app::CrabLungeAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCD250, void, SpawnEffect, (app::CrabLungeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047902D8, CrabLungeAttackBehaviour_SpawnEffect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CCC570, void, ctor, (app::CrabLungeAttackBehaviour * this_ptr))
} // namespace app::classes::Moon::CrabLungeAttackBehaviour
