#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/SeinAnimationParametersHandler.h>

namespace app::classes::SeinAnimationParametersHandler {
    IL2CPP_REGISTER_METHOD(0x00D841B0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinAnimationParametersHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D841E0, float, get_FeetAngle, (app::SeinAnimationParametersHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D84240, void, Awake, (app::SeinAnimationParametersHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D842D0, void, FixedUpdate, (app::SeinAnimationParametersHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinAnimationParametersHandler * this_ptr))
} // namespace app::classes::SeinAnimationParametersHandler
