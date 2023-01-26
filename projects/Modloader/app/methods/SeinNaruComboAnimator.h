#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AtlasSpriteTexture.h>
#include <Modloader/app/structs/Atlas.h>
#include <Modloader/app/structs/SeinNaruComboAnimator.h>
#include <Modloader/app/structs/UberScreenMode__Enum.h>

namespace app::classes::SeinNaruComboAnimator {
    IL2CPP_REGISTER_METHOD(0x008ADB50, app::AtlasSpriteTexture*, get_NaruCurrentTexture, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ADC50, void, Awake, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ADE30, void, OnDestroy, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ADF10, void, Start, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008AE290, void, UpdateSpriteFrame, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008AE5E0, void, FixedUpdate, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008AE5F0, app::Atlas*, get_SettingsAtlas, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008AE6F0, app::UberScreenMode__Enum, GetExternalUberScreenMode, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008AE7C0, float, GetUberTweakValue, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008AE890, bool, DoesProvideAtlas, (app::SeinNaruComboAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008AE940, void, ctor, (app::SeinNaruComboAnimator * this_ptr))
} // namespace app::classes::SeinNaruComboAnimator
