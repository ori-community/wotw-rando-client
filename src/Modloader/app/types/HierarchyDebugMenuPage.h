#pragma once
#include <Modloader/app/structs/HierarchyDebugMenuPage.h>
#include <Modloader/app/structs/HierarchyDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyDebugMenuPage {
        inline app::HierarchyDebugMenuPage__Class** type_info() {
            static app::HierarchyDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyDebugMenuPage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::HierarchyDebugMenuPage__Class>(type_info(), "", "HierarchyDebugMenuPage");
        }
        inline app::HierarchyDebugMenuPage* create() {
            return il2cpp::create_object<app::HierarchyDebugMenuPage>(get_class());
        }
    } // namespace HierarchyDebugMenuPage
} // namespace app::classes::types
