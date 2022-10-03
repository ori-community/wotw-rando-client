#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests_WaitForNSeconds_d_19 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests_WaitForNSeconds_d_19__Class** type_info;
        inline app::Tests_WaitForNSeconds_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_WaitForNSeconds_d_19__Class>(type_info, "HierarchyPerfTest", "Tests", "<WaitForNSeconds>d__19");
        }
        inline app::Tests_WaitForNSeconds_d_19* create() {
            return il2cpp::create_object<app::Tests_WaitForNSeconds_d_19>(get_class());
        }
    } // namespace Tests_WaitForNSeconds_d_19
} // namespace app::classes::types
