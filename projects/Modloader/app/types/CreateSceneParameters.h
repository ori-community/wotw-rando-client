#pragma once
#include <Modloader/app/structs/CreateSceneParameters.h>
#include <Modloader/app/structs/CreateSceneParameters__Boxed.h>
#include <Modloader/app/structs/CreateSceneParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateSceneParameters {
        inline app::CreateSceneParameters__Class** type_info() {
            static app::CreateSceneParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreateSceneParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreateSceneParameters__Class* get_class() {
            return il2cpp::get_class<app::CreateSceneParameters__Class>(type_info(), "UnityEngine.SceneManagement", "CreateSceneParameters");
        }
        inline app::CreateSceneParameters* create() {
            return il2cpp::create_object<app::CreateSceneParameters>(get_class());
        }
        inline app::CreateSceneParameters__Boxed* box(app::CreateSceneParameters value) {
            return il2cpp::box_value<app::CreateSceneParameters__Boxed>(get_class(), value);
        }
    } // namespace CreateSceneParameters
} // namespace app::classes::types
