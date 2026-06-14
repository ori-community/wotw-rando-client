#pragma once
#include <Modloader/app/structs/SceneManagementSystem.h>
#include <Modloader/app/structs/SceneManagementSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneManagementSystem {
        inline app::SceneManagementSystem__Class** type_info() {
            static app::SceneManagementSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneManagementSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneManagementSystem__Class* get_class() {
            return il2cpp::get_class<app::SceneManagementSystem__Class>(type_info(), "Moon.Timeline.Systems", "SceneManagementSystem");
        }
        inline app::SceneManagementSystem* create() {
            return il2cpp::create_object<app::SceneManagementSystem>(get_class());
        }
    } // namespace SceneManagementSystem
} // namespace app::classes::types
