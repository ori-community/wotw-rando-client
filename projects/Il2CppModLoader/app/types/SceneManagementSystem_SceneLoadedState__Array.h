#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneManagementSystem_SceneLoadedState__Array {
        namespace {
            app::SceneManagementSystem_SceneLoadedState__Array__Class* type_info_ref = nullptr;
        }
        app::SceneManagementSystem_SceneLoadedState__Array__Class** type_info = &type_info_ref;
        inline app::SceneManagementSystem_SceneLoadedState__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneManagementSystem_SceneLoadedState__Array__Class>(type_info, "Moon.Timeline.Systems", "SceneManagementSystem+SceneLoadedState[]");
        }
        inline app::SceneManagementSystem_SceneLoadedState__Array* create() {
            return il2cpp::create_object<app::SceneManagementSystem_SceneLoadedState__Array>(get_class());
        }
    } // namespace SceneManagementSystem_SceneLoadedState__Array
} // namespace app::classes::types
