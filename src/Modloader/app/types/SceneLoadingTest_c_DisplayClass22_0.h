#pragma once
#include <Modloader/app/structs/SceneLoadingTest_c_DisplayClass22_0.h>
#include <Modloader/app/structs/SceneLoadingTest_c_DisplayClass22_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingTest_c_DisplayClass22_0 {
        inline app::SceneLoadingTest_c_DisplayClass22_0__Class** type_info() {
            static app::SceneLoadingTest_c_DisplayClass22_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneLoadingTest_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x047772F0));
            }
            return cache;
        }
        inline app::SceneLoadingTest_c_DisplayClass22_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_c_DisplayClass22_0__Class>(type_info(), "Moon", "SceneLoadingTest", "<>c__DisplayClass22_0");
        }
        inline app::SceneLoadingTest_c_DisplayClass22_0* create() {
            return il2cpp::create_object<app::SceneLoadingTest_c_DisplayClass22_0>(get_class());
        }
    } // namespace SceneLoadingTest_c_DisplayClass22_0
} // namespace app::classes::types
