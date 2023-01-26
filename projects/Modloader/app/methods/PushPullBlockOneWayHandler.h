#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/PushPullBlockOneWayHandler.h>

namespace app::classes::PushPullBlockOneWayHandler {
    IL2CPP_REGISTER_METHOD(0x00E844A0, app::Rigidbody*, get_Body, (app::PushPullBlockOneWayHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E84570, void, OnTriggerEnter, (app::PushPullBlockOneWayHandler * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00E84570, void, OnTriggerStay, (app::PushPullBlockOneWayHandler * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00E84580, void, OnTriggerExit, (app::PushPullBlockOneWayHandler * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00E84680, void, OnTrigger, (app::PushPullBlockOneWayHandler * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00E848F0, void, ctor, (app::PushPullBlockOneWayHandler * this_ptr))
} // namespace app::classes::PushPullBlockOneWayHandler
