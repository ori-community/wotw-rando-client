#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchySuspensionTest_State__Enum {
        namespace {
            app::HierarchySuspensionTest_State__Enum__Class* type_info_ref = nullptr;
        }
        app::HierarchySuspensionTest_State__Enum__Class** type_info = &type_info_ref;
        inline app::HierarchySuspensionTest_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchySuspensionTest_State__Enum__Class>(type_info, "", "HierarchySuspensionTest", "State");
        }
        inline app::HierarchySuspensionTest_State__Enum* create() {
            return il2cpp::create_object<app::HierarchySuspensionTest_State__Enum>(get_class());
        }
    } // namespace HierarchySuspensionTest_State__Enum
} // namespace app::classes::types
