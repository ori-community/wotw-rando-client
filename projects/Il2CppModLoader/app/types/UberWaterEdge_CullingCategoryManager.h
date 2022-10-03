#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterEdge_CullingCategoryManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterEdge_CullingCategoryManager__Class** type_info;
        inline app::UberWaterEdge_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterEdge_CullingCategoryManager__Class>(type_info, "", "UberWaterEdge", "CullingCategoryManager");
        }
        inline app::UberWaterEdge_CullingCategoryManager* create() {
            return il2cpp::create_object<app::UberWaterEdge_CullingCategoryManager>(get_class());
        }
    } // namespace UberWaterEdge_CullingCategoryManager
} // namespace app::classes::types
