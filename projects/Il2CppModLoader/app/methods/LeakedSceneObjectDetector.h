#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LeakedSceneObjectDetector {
    IL2CPP_REGISTER_METHOD(0x004E7F00, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x015C33D0, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x015C3550, void, Awake, (app::LeakedSceneObjectDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C35E0, bool, IsValid, (app::LeakedSceneObjectDetector * this_ptr, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x015C38F0, bool, IsPrefab, (app::LeakedSceneObjectDetector * this_ptr, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x015C3AC0, void, UpdateLeakedItem, (app::LeakedSceneObjectDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C3E80, void, OnDisable, (app::LeakedSceneObjectDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C3E90, void, Print, (app::LeakedSceneObjectDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C4920, void, Update, (app::LeakedSceneObjectDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C49B0, void, ctor, (app::LeakedSceneObjectDetector * this_ptr))
} // namespace app::classes::LeakedSceneObjectDetector
