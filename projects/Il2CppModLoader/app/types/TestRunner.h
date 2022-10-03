#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestRunner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestRunner__Class** type_info;
        inline app::TestRunner__Class* get_class() {
            return il2cpp::get_class<app::TestRunner__Class>(type_info, "HierarchyPerfTest", "TestRunner");
        }
        inline app::TestRunner* create() {
            return il2cpp::create_object<app::TestRunner>(get_class());
        }
    } // namespace TestRunner
} // namespace app::classes::types
