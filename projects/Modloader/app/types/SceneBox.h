#pragma once
#include <Modloader/app/structs/SceneBox.h>
#include <Modloader/app/structs/SceneBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneBox {
        inline app::SceneBox__Class** type_info() {
            static app::SceneBox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneBox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneBox__Class* get_class() {
            return il2cpp::get_class<app::SceneBox__Class>(type_info(), "", "SceneBox");
        }
        inline app::SceneBox* create() {
            return il2cpp::create_object<app::SceneBox>(get_class());
        }
    } // namespace SceneBox
} // namespace app::classes::types
