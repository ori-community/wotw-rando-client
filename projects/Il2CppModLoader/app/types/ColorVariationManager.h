#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorVariationManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorVariationManager__Class** type_info;
        inline app::ColorVariationManager__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationManager__Class>(type_info, "", "ColorVariationManager");
        }
        inline app::ColorVariationManager* create() {
            return il2cpp::create_object<app::ColorVariationManager>(get_class());
        }
    } // namespace ColorVariationManager
} // namespace app::classes::types
