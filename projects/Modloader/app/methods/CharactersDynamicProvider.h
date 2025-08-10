#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharactersDynamicProvider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CharactersDynamicProvider {
    IL2CPP_REGISTER_METHOD(0x01316FD0, app::GameObject*, get_GameplayOri, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013170D0, app::GameObject*, get_GameplayKu, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013171D0, app::MoonAnimator*, get_GameplayOriAnimator, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013172D0, app::MoonAnimator*, get_GameplayKuAnimator, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317390, app::Transform*, get_GameplayOriTransform, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013174D0, app::Transform*, get_GameplayKuTransform, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317610, app::Vector3, get_GameplayOriPosition, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317700, app::GameObject*, get_ModelOri, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013177B0, app::GameObject*, get_Builder, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013177F0, app::Transform*, get_WeaponJoint1, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013178A0, app::Transform*, get_GameplayOriRigTransform, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317950, app::Transform*, get_GameplayKuRigTransform, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317A20, app::SoundHost*, get_GameplayOriSoundHost, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317AD0, app::SoundHost*, get_GameplayKuSoundHost, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317BB0, app::GameObject*, get_GameplayKuFeather, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317CA0, app::GameObject*, get_GameplayOriFadeModelGroup, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317D50, app::GameObject*, get_GameplayOriModelGroup, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01317E00, app::MoonAnimator*, get_GoldenSeinAnimator, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01318060, app::GameObject*, get_GoldenSein, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013182C0, app::Transform*, get_GoldenSeinAnimationRoot, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01318530, app::MoonAnimator*, get_GameplayKuFeatherAnimator, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_1, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_2, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_3, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_4, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_5, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_6, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_7, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_8, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_9, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_10, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_11, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_12, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_13, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_14, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_15, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_16, app::CharactersDynamicProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IMoonTypeResolver*, GetResolverForType_17, app::CharactersDynamicProvider* this_ptr)
} // namespace app::classes::CharactersDynamicProvider
