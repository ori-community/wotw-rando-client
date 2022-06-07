#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AnimationCharacterProvider {
    IL2CPP_REGISTER_METHOD(0x004FBE50, app::MoonAnimator *, GetAnimator, (app::CharacterFactory_Characters__Enum character_type))
    IL2CPP_REGISTER_METHODINFO(0x04754E90, AnimationCharacterProvider_GetAnimator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004FC060, void, Destroy, (app::CharacterFactory_Characters__Enum character_type))
    IL2CPP_REGISTER_METHODINFO(0x04788328, AnimationCharacterProvider_Destroy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004FC0D0, app::MoonAnimator *, get_SeinAnimator, ())
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AnimationCharacterProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
