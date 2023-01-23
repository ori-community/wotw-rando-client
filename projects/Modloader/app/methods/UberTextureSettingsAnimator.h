#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/UberTextureSettingsAnimator.h>
#include <Modloader/app/structs/UberShaderProperty_Texture__Enum.h>
#include <Modloader/app/structs/UberTextureSettingsAnimator_TextureName__Enum.h>
#include <Modloader/app/structs/UberShaderTextureBase.h>
#include <Modloader/app/structs/UberShaderComponent.h>

namespace app::classes::UberTextureSettingsAnimator {
    IL2CPP_REGISTER_METHOD(0x012902E0, app::Vector2, get_OriginalOffset, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01290300, app::Vector2, get_OriginalScale, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B530, float, get_OriginalRotation, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01290320, void, CacheOriginals, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012905F0, app::Vector2, get_CurrentTextureOffset, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012906B0, void, set_CurrentTextureOffset, (app::UberTextureSettingsAnimator * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x012907C0, app::Vector2, get_CurrentTextureScale, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01290880, void, set_CurrentTextureScale, (app::UberTextureSettingsAnimator * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01290960, float, get_CurrentTextureRotation, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01290A40, void, set_CurrentTextureRotation, (app::UberTextureSettingsAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01290B60, app::UberShaderProperty_Texture__Enum, GetTexturePropertyFromTextureName, (app::UberTextureSettingsAnimator * this_ptr, app::UberTextureSettingsAnimator_TextureName__Enum texture_name))
    IL2CPP_REGISTER_METHOD(0x01290C30, app::UberShaderTextureBase*, UberShaderTextureBaseFromTextureName, (app::UberTextureSettingsAnimator * this_ptr, app::UberTextureSettingsAnimator_TextureName__Enum texture_name, app::UberShaderComponent* uber_shader_component))
    IL2CPP_REGISTER_METHOD(0x01291410, void, SampleValue, (app::UberTextureSettingsAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x01291780, float, get_Duration, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012918A0, void, RestoreToOriginalState, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01291910, bool, get_IsLooping, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01291C90, void, ctor, (app::UberTextureSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01291D60, void, cctor, ())
} // namespace app::classes::UberTextureSettingsAnimator
