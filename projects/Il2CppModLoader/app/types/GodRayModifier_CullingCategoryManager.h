#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GodRayModifier_CullingCategoryManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GodRayModifier_CullingCategoryManager__Class** type_info;
        inline app::GodRayModifier_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::GodRayModifier_CullingCategoryManager__Class>(type_info, "", "GodRayModifier", "CullingCategoryManager");
        }
        inline app::GodRayModifier_CullingCategoryManager* create() {
            return il2cpp::create_object<app::GodRayModifier_CullingCategoryManager>(get_class());
        }
    } // namespace GodRayModifier_CullingCategoryManager
} // namespace app::classes::types
