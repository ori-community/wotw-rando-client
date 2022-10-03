#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneManagementSystem {
        namespace {
            app::SceneManagementSystem__Class* type_info_ref = nullptr;
        }
        app::SceneManagementSystem__Class** type_info = &type_info_ref;
        inline app::SceneManagementSystem__Class* get_class() {
            return il2cpp::get_class<app::SceneManagementSystem__Class>(type_info, "Moon.Timeline.Systems", "SceneManagementSystem");
        }
        inline app::SceneManagementSystem* create() {
            return il2cpp::create_object<app::SceneManagementSystem>(get_class());
        }
    } // namespace SceneManagementSystem
} // namespace app::classes::types
