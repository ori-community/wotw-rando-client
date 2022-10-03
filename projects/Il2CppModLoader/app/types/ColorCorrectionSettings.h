#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorCorrectionSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorCorrectionSettings__Class** type_info;
        inline app::ColorCorrectionSettings__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionSettings__Class>(type_info, "", "ColorCorrectionSettings");
        }
        inline app::ColorCorrectionSettings* create() {
            return il2cpp::create_object<app::ColorCorrectionSettings>(get_class());
        }
    } // namespace ColorCorrectionSettings
} // namespace app::classes::types
