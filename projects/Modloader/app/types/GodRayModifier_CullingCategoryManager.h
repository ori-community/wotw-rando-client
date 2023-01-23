#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GodRayModifier_CullingCategoryManager__Class.h>
#include <Modloader/app/structs/GodRayModifier_CullingCategoryManager.h>

namespace app::classes::types {
    namespace GodRayModifier_CullingCategoryManager {
        inline app::GodRayModifier_CullingCategoryManager__Class** type_info = (app::GodRayModifier_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0470ED98));
        inline app::GodRayModifier_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::GodRayModifier_CullingCategoryManager__Class>(type_info, "", "GodRayModifier", "CullingCategoryManager");
        }
        inline app::GodRayModifier_CullingCategoryManager* create() {
            return il2cpp::create_object<app::GodRayModifier_CullingCategoryManager>(get_class());
        }
    } // namespace GodRayModifier_CullingCategoryManager
} // namespace app::classes::types
