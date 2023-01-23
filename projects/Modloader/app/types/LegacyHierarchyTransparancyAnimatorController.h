#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyHierarchyTransparancyAnimatorController__Class.h>
#include <Modloader/app/structs/LegacyHierarchyTransparancyAnimatorController.h>

namespace app::classes::types {
    namespace LegacyHierarchyTransparancyAnimatorController {
        namespace {
            inline app::LegacyHierarchyTransparancyAnimatorController__Class* type_info_ref = nullptr;
        }
        inline app::LegacyHierarchyTransparancyAnimatorController__Class** type_info = &type_info_ref;
        inline app::LegacyHierarchyTransparancyAnimatorController__Class* get_class() {
            return il2cpp::get_class<app::LegacyHierarchyTransparancyAnimatorController__Class>(type_info, "", "LegacyHierarchyTransparancyAnimatorController");
        }
        inline app::LegacyHierarchyTransparancyAnimatorController* create() {
            return il2cpp::create_object<app::LegacyHierarchyTransparancyAnimatorController>(get_class());
        }
    } // namespace LegacyHierarchyTransparancyAnimatorController
} // namespace app::classes::types
