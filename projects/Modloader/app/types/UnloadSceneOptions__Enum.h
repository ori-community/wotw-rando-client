#pragma once
#include <Modloader/app/structs/UnloadSceneOptions__Enum.h>
#include <Modloader/app/structs/UnloadSceneOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnloadSceneOptions__Enum {
        inline app::UnloadSceneOptions__Enum__Class** type_info() {
            static app::UnloadSceneOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnloadSceneOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnloadSceneOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnloadSceneOptions__Enum__Class>(type_info(), "UnityEngine.SceneManagement", "UnloadSceneOptions");
        }
        inline app::UnloadSceneOptions__Enum* create() {
            return il2cpp::create_object<app::UnloadSceneOptions__Enum>(get_class());
        }
    } // namespace UnloadSceneOptions__Enum
} // namespace app::classes::types
