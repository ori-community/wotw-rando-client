#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingTest_LoadAndUnloadScene_d_20 {
        namespace {
            inline app::SceneLoadingTest_LoadAndUnloadScene_d_20__Class* type_info_ref = nullptr;
        }
        inline app::SceneLoadingTest_LoadAndUnloadScene_d_20__Class** type_info = &type_info_ref;
        inline app::SceneLoadingTest_LoadAndUnloadScene_d_20__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_LoadAndUnloadScene_d_20__Class>(type_info, "Moon", "SceneLoadingTest", "<LoadAndUnloadScene>d__20");
        }
        inline app::SceneLoadingTest_LoadAndUnloadScene_d_20* create() {
            return il2cpp::create_object<app::SceneLoadingTest_LoadAndUnloadScene_d_20>(get_class());
        }
        inline app::SceneLoadingTest_LoadAndUnloadScene_d_20__Boxed* box(app::SceneLoadingTest_LoadAndUnloadScene_d_20 value) {
            return il2cpp::box_value<app::SceneLoadingTest_LoadAndUnloadScene_d_20__Boxed>(get_class(), value);
        }
    } // namespace SceneLoadingTest_LoadAndUnloadScene_d_20
} // namespace app::classes::types
