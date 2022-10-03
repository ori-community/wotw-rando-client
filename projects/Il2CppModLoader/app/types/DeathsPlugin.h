#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeathsPlugin {
        namespace {
            app::DeathsPlugin__Class* type_info_ref = nullptr;
        }
        app::DeathsPlugin__Class** type_info = &type_info_ref;
        inline app::DeathsPlugin__Class* get_class() {
            return il2cpp::get_class<app::DeathsPlugin__Class>(type_info, "", "DeathsPlugin");
        }
        inline app::DeathsPlugin* create() {
            return il2cpp::create_object<app::DeathsPlugin>(get_class());
        }
    } // namespace DeathsPlugin
} // namespace app::classes::types
