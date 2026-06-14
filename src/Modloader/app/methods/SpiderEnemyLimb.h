#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/SpiderEnemyLimb.h>

namespace app::classes::SpiderEnemyLimb {
    IL2CPP_REGISTER_METHOD(0x011BC660, void, Awake, app::SpiderEnemyLimb* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011BC690, void, OnTriggerEnter, app::SpiderEnemyLimb* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x011BC720, bool, ShouldDetach, app::SpiderEnemyLimb* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011BC9C0, void, LiftLimb, app::SpiderEnemyLimb* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011BCCE0, void, LateUpdate, app::SpiderEnemyLimb* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011BD360, void, ctor, app::SpiderEnemyLimb* this_ptr)
} // namespace app::classes::SpiderEnemyLimb
