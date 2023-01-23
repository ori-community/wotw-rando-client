#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HierarchyPerfTestComp_Empty__Class.h>
#include <Modloader/app/structs/HierarchyPerfTestComp_Empty.h>

namespace app::classes::types {
    namespace HierarchyPerfTestComp_Empty {
        namespace {
            inline app::HierarchyPerfTestComp_Empty__Class* type_info_ref = nullptr;
        }
        inline app::HierarchyPerfTestComp_Empty__Class** type_info = &type_info_ref;
        inline app::HierarchyPerfTestComp_Empty__Class* get_class() {
            return il2cpp::get_class<app::HierarchyPerfTestComp_Empty__Class>(type_info, "HierarchyPerfTest", "HierarchyPerfTestComp_Empty");
        }
        inline app::HierarchyPerfTestComp_Empty* create() {
            return il2cpp::create_object<app::HierarchyPerfTestComp_Empty>(get_class());
        }
    } // namespace HierarchyPerfTestComp_Empty
} // namespace app::classes::types
