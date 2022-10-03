#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestRunner_RunScenesThroughTests_d_14 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestRunner_RunScenesThroughTests_d_14__Class** type_info;
        inline app::TestRunner_RunScenesThroughTests_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::TestRunner_RunScenesThroughTests_d_14__Class>(type_info, "HierarchyPerfTest", "TestRunner", "<RunScenesThroughTests>d__14");
        }
        inline app::TestRunner_RunScenesThroughTests_d_14* create() {
            return il2cpp::create_object<app::TestRunner_RunScenesThroughTests_d_14>(get_class());
        }
    } // namespace TestRunner_RunScenesThroughTests_d_14
} // namespace app::classes::types
