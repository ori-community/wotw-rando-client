#pragma once
#include <Modloader/app/structs/SceneTracking.h>
#include <Modloader/app/structs/SceneTracking__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneTracking {
        inline app::SceneTracking__Class** type_info() {
            static app::SceneTracking__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneTracking__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneTracking__Class* get_class() {
            return il2cpp::get_class<app::SceneTracking__Class>(type_info(), "Moon.EditorTools.SceneTracking", "SceneTracking");
        }
        inline app::SceneTracking* create() {
            return il2cpp::create_object<app::SceneTracking>(get_class());
        }
    } // namespace SceneTracking
} // namespace app::classes::types
