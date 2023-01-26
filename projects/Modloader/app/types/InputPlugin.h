#pragma once
#include <Modloader/app/structs/InputPlugin.h>
#include <Modloader/app/structs/InputPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputPlugin {
        inline app::InputPlugin__Class** type_info() {
            static app::InputPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputPlugin__Class* get_class() {
            return il2cpp::get_class<app::InputPlugin__Class>(type_info(), "", "InputPlugin");
        }
        inline app::InputPlugin* create() {
            return il2cpp::create_object<app::InputPlugin>(get_class());
        }
    } // namespace InputPlugin
} // namespace app::classes::types
