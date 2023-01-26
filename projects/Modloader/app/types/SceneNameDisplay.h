#pragma once
#include <Modloader/app/structs/SceneNameDisplay.h>
#include <Modloader/app/structs/SceneNameDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneNameDisplay {
        inline app::SceneNameDisplay__Class** type_info() {
            static app::SceneNameDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneNameDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneNameDisplay__Class* get_class() {
            return il2cpp::get_class<app::SceneNameDisplay__Class>(type_info(), "", "SceneNameDisplay");
        }
        inline app::SceneNameDisplay* create() {
            return il2cpp::create_object<app::SceneNameDisplay>(get_class());
        }
    } // namespace SceneNameDisplay
} // namespace app::classes::types
