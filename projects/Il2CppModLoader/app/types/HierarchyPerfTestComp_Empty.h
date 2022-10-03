#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchyPerfTestComp_Empty {
        namespace {
            app::HierarchyPerfTestComp_Empty__Class* type_info_ref = nullptr;
        }
        app::HierarchyPerfTestComp_Empty__Class** type_info = &type_info_ref;
        inline app::HierarchyPerfTestComp_Empty__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTestComp_Empty__Class>(type_info, "HierarchyPerfTest", "HierarchyPerfTestComp_Empty");
        }
        inline app::HierarchyPerfTestComp_Empty* create() {
            return il2cpp::create_object<app::HierarchyPerfTestComp_Empty>(get_class());
        }
    } // namespace HierarchyPerfTestComp_Empty
} // namespace app::classes::types
