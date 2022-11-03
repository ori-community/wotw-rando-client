#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::CrabClawThreeHitAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00CCC620, void, OnEnter, (app::CrabClawThreeHitAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCCA30, void, OnExit, (app::CrabClawThreeHitAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCCE40, void, SpawnFirstEffect, (app::CrabClawThreeHitAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473F8C8, CrabClawThreeHitAttackBehaviour_SpawnFirstEffect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CCCE70, void, SpawnSecondEffect, (app::CrabClawThreeHitAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789828, CrabClawThreeHitAttackBehaviour_SpawnSecondEffect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CCCEA0, void, SpawnThirdEffect, (app::CrabClawThreeHitAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C288, CrabClawThreeHitAttackBehaviour_SpawnThirdEffect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CCC570, void, ctor, (app::CrabClawThreeHitAttackBehaviour * this_ptr))
} // namespace app::classes::Moon::CrabClawThreeHitAttackBehaviour
