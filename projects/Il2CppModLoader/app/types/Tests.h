#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests__Class** type_info;
        inline app::Tests__Class* get_class() {
            return il2cpp::get_class<app::Tests__Class>(type_info, "HierarchyPerfTest", "Tests");
        }
        inline app::Tests* create() {
            return il2cpp::create_object<app::Tests>(get_class());
        }
    } // namespace Tests
} // namespace app::classes::types
