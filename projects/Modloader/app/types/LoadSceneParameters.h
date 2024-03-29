#pragma once
#include <Modloader/app/structs/LoadSceneParameters.h>
#include <Modloader/app/structs/LoadSceneParameters__Boxed.h>
#include <Modloader/app/structs/LoadSceneParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadSceneParameters {
        inline app::LoadSceneParameters__Class** type_info() {
            static app::LoadSceneParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadSceneParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadSceneParameters__Class* get_class() {
            return il2cpp::get_class<app::LoadSceneParameters__Class>(type_info(), "UnityEngine.SceneManagement", "LoadSceneParameters");
        }
        inline app::LoadSceneParameters* create() {
            return il2cpp::create_object<app::LoadSceneParameters>(get_class());
        }
        inline app::LoadSceneParameters__Boxed* box(app::LoadSceneParameters value) {
            return il2cpp::box_value<app::LoadSceneParameters__Boxed>(get_class(), value);
        }
    } // namespace LoadSceneParameters
} // namespace app::classes::types
