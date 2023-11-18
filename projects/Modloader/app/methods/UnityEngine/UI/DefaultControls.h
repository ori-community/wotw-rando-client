#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/DefaultControls_Resources.h>
#include <Modloader/app/structs/Selectable.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Text.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::UI::DefaultControls {
    IL2CPP_REGISTER_METHOD(0x01F31160, app::GameObject*, CreateUIElementRoot, (app::String * name, app::Vector2 size))
    IL2CPP_REGISTER_METHOD(0x01F31340, app::GameObject*, CreateUIObject, (app::String * name, app::GameObject* parent))
    IL2CPP_REGISTER_METHOD(0x01F314E0, void, SetDefaultTextValues, (app::Text * lbl))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, SetDefaultColorTransitionValues, (app::Selectable * slider))
    IL2CPP_REGISTER_METHOD(0x01F315C0, void, SetParentAndAlign, (app::GameObject * child, app::GameObject* parent))
    IL2CPP_REGISTER_METHOD(0x01F317C0, void, SetLayerRecursively, (app::GameObject * go, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x01F319F0, app::GameObject*, CreatePanel, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F31CE0, app::GameObject*, CreateButton, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F32140, app::GameObject*, CreateText, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F32260, app::GameObject*, CreateImage, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F32340, app::GameObject*, CreateRawImage, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F32420, app::GameObject*, CreateSlider, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F32DC0, app::GameObject*, CreateScrollbar, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F33270, app::GameObject*, CreateToggle, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F33980, app::GameObject*, CreateInputField, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F34060, app::GameObject*, CreateDropdown, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F35B10, app::GameObject*, CreateScrollView, (app::DefaultControls_Resources resources))
    IL2CPP_REGISTER_METHOD(0x01F36560, void, cctor, ())
} // namespace app::classes::UnityEngine::UI::DefaultControls
