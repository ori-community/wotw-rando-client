#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneLoadingTest__Class** type_info;
        inline app::SceneLoadingTest__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingTest__Class>(type_info, "Moon", "SceneLoadingTest");
        }
        inline app::SceneLoadingTest* create() {
            return il2cpp::create_object<app::SceneLoadingTest>(get_class());
        }
    } // namespace SceneLoadingTest
} // namespace app::classes::types
