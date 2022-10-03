#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tests_CompoentRunnerID__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tests_CompoentRunnerID__Enum__Class** type_info;
        inline app::Tests_CompoentRunnerID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_CompoentRunnerID__Enum__Class>(type_info, "HierarchyPerfTest", "Tests", "CompoentRunnerID");
        }
        inline app::Tests_CompoentRunnerID__Enum* create() {
            return il2cpp::create_object<app::Tests_CompoentRunnerID__Enum>(get_class());
        }
    } // namespace Tests_CompoentRunnerID__Enum
} // namespace app::classes::types
