#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingTest_c_DisplayClass22_0 {
        inline app::SceneLoadingTest_c_DisplayClass22_0__Class** type_info = (app::SceneLoadingTest_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x047772F0));
        inline app::SceneLoadingTest_c_DisplayClass22_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_c_DisplayClass22_0__Class>(type_info, "Moon", "SceneLoadingTest", "<>c__DisplayClass22_0");
        }
        inline app::SceneLoadingTest_c_DisplayClass22_0* create() {
            return il2cpp::create_object<app::SceneLoadingTest_c_DisplayClass22_0>(get_class());
        }
    } // namespace SceneLoadingTest_c_DisplayClass22_0
} // namespace app::classes::types
