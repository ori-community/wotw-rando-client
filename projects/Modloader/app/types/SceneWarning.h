#pragma once
#include <Modloader/app/structs/SceneWarning.h>
#include <Modloader/app/structs/SceneWarning__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneWarning {
        inline app::SceneWarning__Class** type_info() {
            static app::SceneWarning__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneWarning__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneWarning__Class* get_class() {
            return il2cpp::get_class<app::SceneWarning__Class>(type_info(), "", "SceneWarning");
        }
        inline app::SceneWarning* create() {
            return il2cpp::create_object<app::SceneWarning>(get_class());
        }
    } // namespace SceneWarning
} // namespace app::classes::types
