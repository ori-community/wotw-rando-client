#pragma once
#include <Modloader/app/structs/AbilitiesPlugin.h>
#include <Modloader/app/structs/AbilitiesPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbilitiesPlugin {
        inline app::AbilitiesPlugin__Class** type_info() {
            static app::AbilitiesPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AbilitiesPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AbilitiesPlugin__Class* get_class() {
            return il2cpp::get_class<app::AbilitiesPlugin__Class>(type_info(), "", "AbilitiesPlugin");
        }
        inline app::AbilitiesPlugin* create() {
            return il2cpp::create_object<app::AbilitiesPlugin>(get_class());
        }
    } // namespace AbilitiesPlugin
} // namespace app::classes::types
