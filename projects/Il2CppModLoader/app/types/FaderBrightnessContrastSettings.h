#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FaderBrightnessContrastSettings {
        inline app::FaderBrightnessContrastSettings__Class** type_info = (app::FaderBrightnessContrastSettings__Class**)(modloader::win::memory::resolve_rva(0x047297A0));
        inline app::FaderBrightnessContrastSettings__Class* get_class() {
            return il2cpp::get_class<app::FaderBrightnessContrastSettings__Class>(type_info, "", "FaderBrightnessContrastSettings");
        }
        inline app::FaderBrightnessContrastSettings* create() {
            return il2cpp::create_object<app::FaderBrightnessContrastSettings>(get_class());
        }
    } // namespace FaderBrightnessContrastSettings
} // namespace app::classes::types
