#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Glitch_InterferenceSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Glitch_InterferenceSettings__Class** type_info;
        inline app::Glitch_InterferenceSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::Glitch_InterferenceSettings__Class>(type_info, "Colorful", "Glitch", "InterferenceSettings");
        }
        inline app::Glitch_InterferenceSettings* create() {
            return il2cpp::create_object<app::Glitch_InterferenceSettings>(get_class());
        }
    } // namespace Glitch_InterferenceSettings
} // namespace app::classes::types
