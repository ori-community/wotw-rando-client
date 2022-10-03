#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyHierarchyTransparancyAnimatorController {
        namespace {
            app::LegacyHierarchyTransparancyAnimatorController__Class* type_info_ref = nullptr;
        }
        app::LegacyHierarchyTransparancyAnimatorController__Class** type_info = &type_info_ref;
        inline app::LegacyHierarchyTransparancyAnimatorController__Class* get_class() {
            return il2cpp::get_class<app::LegacyHierarchyTransparancyAnimatorController__Class>(type_info, "", "LegacyHierarchyTransparancyAnimatorController");
        }
        inline app::LegacyHierarchyTransparancyAnimatorController* create() {
            return il2cpp::create_object<app::LegacyHierarchyTransparancyAnimatorController>(get_class());
        }
    } // namespace LegacyHierarchyTransparancyAnimatorController
} // namespace app::classes::types
