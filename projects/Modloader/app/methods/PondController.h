#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/PondController.h>

namespace app::classes::PondController {
    IL2CPP_REGISTER_METHOD(0x00C5E4E0, void, FixedUpdate, app::PondController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C5E850, void, OnTriggerEnter, app::PondController* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00C5ECD0, void, OnAnimationEnd, app::PondController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C5F390, void, ctor, app::PondController* this_ptr)
} // namespace app::classes::PondController
