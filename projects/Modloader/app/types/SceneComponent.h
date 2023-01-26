#pragma once
#include <Modloader/app/structs/SceneComponent.h>
#include <Modloader/app/structs/SceneComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneComponent {
        inline app::SceneComponent__Class** type_info() {
            static app::SceneComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneComponent__Class* get_class() {
            return il2cpp::get_class<app::SceneComponent__Class>(type_info(), "Moon.SceneManagement", "SceneComponent");
        }
        inline app::SceneComponent* create() {
            return il2cpp::create_object<app::SceneComponent>(get_class());
        }
    } // namespace SceneComponent
} // namespace app::classes::types
