#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateSceneParameters {
        namespace {
            inline app::CreateSceneParameters__Class* type_info_ref = nullptr;
        }
        inline app::CreateSceneParameters__Class** type_info = &type_info_ref;
        inline app::CreateSceneParameters__Class* get_class() {
            return il2cpp::get_class<app::CreateSceneParameters__Class>(type_info, "UnityEngine.SceneManagement", "CreateSceneParameters");
        }
        inline app::CreateSceneParameters* create() {
            return il2cpp::create_object<app::CreateSceneParameters>(get_class());
        }
        inline app::CreateSceneParameters__Boxed* box(app::CreateSceneParameters value) {
            return il2cpp::box_value<app::CreateSceneParameters__Boxed>(get_class(), value);
        }
    } // namespace CreateSceneParameters
} // namespace app::classes::types
