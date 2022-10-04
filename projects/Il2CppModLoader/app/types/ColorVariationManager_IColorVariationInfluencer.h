#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorVariationManager_IColorVariationInfluencer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorVariationManager_IColorVariationInfluencer__Class** type_info;
        inline app::ColorVariationManager_IColorVariationInfluencer__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorVariationManager_IColorVariationInfluencer__Class>(type_info, "", "ColorVariationManager", "IColorVariationInfluencer");
        }
        inline app::ColorVariationManager_IColorVariationInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::ColorVariationManager_IColorVariationInfluencer__Array>(get_class(), size);
        }
    } // namespace ColorVariationManager_IColorVariationInfluencer
} // namespace app::classes::types
