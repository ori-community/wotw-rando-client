#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests_c__Class** type_info;
        inline app::Tests_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_c__Class>(type_info, "HierarchyPerfTest", "Tests", "<>c");
        }
        inline app::Tests_c* create() {
            return il2cpp::create_object<app::Tests_c>(get_class());
        }
    } // namespace Tests_c
} // namespace app::classes::types
