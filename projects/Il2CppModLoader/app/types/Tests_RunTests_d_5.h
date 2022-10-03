#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests_RunTests_d_5 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests_RunTests_d_5__Class** type_info;
        inline app::Tests_RunTests_d_5__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_RunTests_d_5__Class>(type_info, "HierarchyPerfTest", "Tests", "<RunTests>d__5");
        }
        inline app::Tests_RunTests_d_5* create() {
            return il2cpp::create_object<app::Tests_RunTests_d_5>(get_class());
        }
    } // namespace Tests_RunTests_d_5
} // namespace app::classes::types
