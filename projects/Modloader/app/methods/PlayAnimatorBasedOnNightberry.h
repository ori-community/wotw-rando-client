#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayAnimatorBasedOnNightberry.h>

namespace app::classes::PlayAnimatorBasedOnNightberry {
    IL2CPP_REGISTER_METHOD(0x01176AD0, void, Start, app::PlayAnimatorBasedOnNightberry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01176B70, void, FixedUpdate, app::PlayAnimatorBasedOnNightberry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PlayAnimatorBasedOnNightberry* this_ptr)
} // namespace app::classes::PlayAnimatorBasedOnNightberry
