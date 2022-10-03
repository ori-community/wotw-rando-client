#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterCross_CullingCategoryManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterCross_CullingCategoryManager__Class** type_info;
        inline app::UberWaterCross_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterCross_CullingCategoryManager__Class>(type_info, "", "UberWaterCross", "CullingCategoryManager");
        }
        inline app::UberWaterCross_CullingCategoryManager* create() {
            return il2cpp::create_object<app::UberWaterCross_CullingCategoryManager>(get_class());
        }
    } // namespace UberWaterCross_CullingCategoryManager
} // namespace app::classes::types
