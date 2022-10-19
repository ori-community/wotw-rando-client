#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingTest_Stats {
        inline app::SceneLoadingTest_Stats__Class** type_info = (app::SceneLoadingTest_Stats__Class**)(modloader::win::memory::resolve_rva(0x04757240));
        inline app::SceneLoadingTest_Stats__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_Stats__Class>(type_info, "Moon", "SceneLoadingTest", "Stats");
        }
        inline app::SceneLoadingTest_Stats* create() {
            return il2cpp::create_object<app::SceneLoadingTest_Stats>(get_class());
        }
    } // namespace SceneLoadingTest_Stats
} // namespace app::classes::types
