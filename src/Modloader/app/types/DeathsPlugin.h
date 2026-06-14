#pragma once
#include <Modloader/app/structs/DeathsPlugin.h>
#include <Modloader/app/structs/DeathsPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeathsPlugin {
        inline app::DeathsPlugin__Class** type_info() {
            static app::DeathsPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeathsPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeathsPlugin__Class* get_class() {
            return il2cpp::get_class<app::DeathsPlugin__Class>(type_info(), "", "DeathsPlugin");
        }
        inline app::DeathsPlugin* create() {
            return il2cpp::create_object<app::DeathsPlugin>(get_class());
        }
    } // namespace DeathsPlugin
} // namespace app::classes::types
