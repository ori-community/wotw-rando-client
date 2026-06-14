#pragma once
#include <Modloader/app/structs/HierarchyPerfTestComp_Empty.h>
#include <Modloader/app/structs/HierarchyPerfTestComp_Empty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerfTestComp_Empty {
        inline app::HierarchyPerfTestComp_Empty__Class** type_info() {
            static app::HierarchyPerfTestComp_Empty__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyPerfTestComp_Empty__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyPerfTestComp_Empty__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTestComp_Empty__Class>(type_info(), "HierarchyPerfTest", "HierarchyPerfTestComp_Empty");
        }
        inline app::HierarchyPerfTestComp_Empty* create() {
            return il2cpp::create_object<app::HierarchyPerfTestComp_Empty>(get_class());
        }
    } // namespace HierarchyPerfTestComp_Empty
} // namespace app::classes::types
