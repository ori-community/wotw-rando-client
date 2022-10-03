#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabEvents_PlayFabErrorEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabEvents_PlayFabErrorEvent__Class** type_info;
        inline app::PlayFabEvents_PlayFabErrorEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabEvents_PlayFabErrorEvent__Class>(type_info, "PlayFab.Events", "PlayFabEvents", "PlayFabErrorEvent");
        }
        inline app::PlayFabEvents_PlayFabErrorEvent* create() {
            return il2cpp::create_object<app::PlayFabEvents_PlayFabErrorEvent>(get_class());
        }
    } // namespace PlayFabEvents_PlayFabErrorEvent
} // namespace app::classes::types
