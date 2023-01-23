#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CollisionEventHandler.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::Moon::CollisionEventHandler {
    IL2CPP_REGISTER_METHOD(0x02557FE0, void, OnCollisionEnter, (app::CollisionEventHandler * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x02558080, void, OnCollisionStay, (app::CollisionEventHandler * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x02558120, void, OnCollisionExit, (app::CollisionEventHandler * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x025581C0, void, ctor, (app::CollisionEventHandler * this_ptr))
} // namespace app::classes::Moon::CollisionEventHandler
