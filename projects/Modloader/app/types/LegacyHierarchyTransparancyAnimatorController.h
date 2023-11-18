#pragma once
#include <Modloader/app/structs/LegacyHierarchyTransparancyAnimatorController.h>
#include <Modloader/app/structs/LegacyHierarchyTransparancyAnimatorController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyHierarchyTransparancyAnimatorController {
        inline app::LegacyHierarchyTransparancyAnimatorController__Class** type_info() {
            static app::LegacyHierarchyTransparancyAnimatorController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyHierarchyTransparancyAnimatorController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyHierarchyTransparancyAnimatorController__Class* get_class() {
            return il2cpp::get_class<app::LegacyHierarchyTransparancyAnimatorController__Class>(type_info(), "", "LegacyHierarchyTransparancyAnimatorController");
        }
        inline app::LegacyHierarchyTransparancyAnimatorController* create() {
            return il2cpp::create_object<app::LegacyHierarchyTransparancyAnimatorController>(get_class());
        }
    } // namespace LegacyHierarchyTransparancyAnimatorController
} // namespace app::classes::types
