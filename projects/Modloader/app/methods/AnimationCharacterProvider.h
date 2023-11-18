#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/AnimationCharacterProvider.h>
#include <Modloader/app/structs/CharacterFactory_Characters__Enum.h>

namespace app::classes::AnimationCharacterProvider {
    IL2CPP_REGISTER_METHOD(0x004FBE50, app::MoonAnimator*, GetAnimator, (app::CharacterFactory_Characters__Enum character_type))
    IL2CPP_REGISTER_METHOD(0x004FC060, void, Destroy, (app::CharacterFactory_Characters__Enum character_type))
    IL2CPP_REGISTER_METHOD(0x004FC0D0, app::MoonAnimator*, get_SeinAnimator, ())
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AnimationCharacterProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::AnimationCharacterProvider
