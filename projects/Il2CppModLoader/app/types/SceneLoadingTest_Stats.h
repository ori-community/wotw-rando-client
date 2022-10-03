#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingTest_Stats {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneLoadingTest_Stats__Class** type_info;
        inline app::SceneLoadingTest_Stats__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_Stats__Class>(type_info, "Moon", "SceneLoadingTest", "Stats");
        }
        inline app::SceneLoadingTest_Stats* create() {
            return il2cpp::create_object<app::SceneLoadingTest_Stats>(get_class());
        }
    } // namespace SceneLoadingTest_Stats
} // namespace app::classes::types
