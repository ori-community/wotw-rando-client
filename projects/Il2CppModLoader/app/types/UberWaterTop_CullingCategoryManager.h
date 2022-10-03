#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterTop_CullingCategoryManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterTop_CullingCategoryManager__Class** type_info;
        inline app::UberWaterTop_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterTop_CullingCategoryManager__Class>(type_info, "", "UberWaterTop", "CullingCategoryManager");
        }
        inline app::UberWaterTop_CullingCategoryManager* create() {
            return il2cpp::create_object<app::UberWaterTop_CullingCategoryManager>(get_class());
        }
    } // namespace UberWaterTop_CullingCategoryManager
} // namespace app::classes::types
