#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorVariationSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorVariationSettings__Class** type_info;
        inline app::ColorVariationSettings__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationSettings__Class>(type_info, "", "ColorVariationSettings");
        }
        inline app::ColorVariationSettings* create() {
            return il2cpp::create_object<app::ColorVariationSettings>(get_class());
        }
    } // namespace ColorVariationSettings
} // namespace app::classes::types
