#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestRunner_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestRunner_c__Class** type_info;
        inline app::TestRunner_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TestRunner_c__Class>(type_info, "HierarchyPerfTest", "TestRunner", "<>c");
        }
        inline app::TestRunner_c* create() {
            return il2cpp::create_object<app::TestRunner_c>(get_class());
        }
    } // namespace TestRunner_c
} // namespace app::classes::types
