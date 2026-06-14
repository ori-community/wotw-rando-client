#pragma once
#include <Modloader/app/structs/HierarchyTester_State__Enum.h>
#include <Modloader/app/structs/HierarchyTester_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchyTester_State__Enum {
        inline app::HierarchyTester_State__Enum__Class** type_info() {
            static app::HierarchyTester_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HierarchyTester_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HierarchyTester_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchyTester_State__Enum__Class>(type_info(), "Moon.HierarchyPerformanceTest", "HierarchyTester", "State");
        }
        inline app::HierarchyTester_State__Enum* create() {
            return il2cpp::create_object<app::HierarchyTester_State__Enum>(get_class());
        }
    } // namespace HierarchyTester_State__Enum
} // namespace app::classes::types
