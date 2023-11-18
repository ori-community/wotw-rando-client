#pragma once
#include <Modloader/app/structs/LoadSceneMode__Enum.h>
#include <Modloader/app/structs/LoadSceneMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadSceneMode__Enum {
        inline app::LoadSceneMode__Enum__Class** type_info() {
            static app::LoadSceneMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadSceneMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadSceneMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LoadSceneMode__Enum__Class>(type_info(), "UnityEngine.SceneManagement", "LoadSceneMode");
        }
        inline app::LoadSceneMode__Enum* create() {
            return il2cpp::create_object<app::LoadSceneMode__Enum>(get_class());
        }
    } // namespace LoadSceneMode__Enum
} // namespace app::classes::types
