#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Glitch_InterferenceSettings {
        inline app::Glitch_InterferenceSettings__Class** type_info = (app::Glitch_InterferenceSettings__Class**)(modloader::win::memory::resolve_rva(0x04735B68));
        inline app::Glitch_InterferenceSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::Glitch_InterferenceSettings__Class>(type_info, "Colorful", "Glitch", "InterferenceSettings");
        }
        inline app::Glitch_InterferenceSettings* create() {
            return il2cpp::create_object<app::Glitch_InterferenceSettings>(get_class());
        }
    } // namespace Glitch_InterferenceSettings
} // namespace app::classes::types
