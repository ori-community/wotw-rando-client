#pragma once
#include <Modloader/app/structs/GenericScenePosition.h>
#include <Modloader/app/structs/GenericScenePosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericScenePosition {
        inline app::GenericScenePosition__Class** type_info() {
            static app::GenericScenePosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericScenePosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericScenePosition__Class* get_class() {
            return il2cpp::get_class<app::GenericScenePosition__Class>(type_info(), "Moon.SceneManagement", "GenericScenePosition");
        }
        inline app::GenericScenePosition* create() {
            return il2cpp::create_object<app::GenericScenePosition>(get_class());
        }
    } // namespace GenericScenePosition
} // namespace app::classes::types
