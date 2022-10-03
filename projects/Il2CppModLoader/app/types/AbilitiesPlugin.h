#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbilitiesPlugin {
        namespace {
            app::AbilitiesPlugin__Class* type_info_ref = nullptr;
        }
        app::AbilitiesPlugin__Class** type_info = &type_info_ref;
        inline app::AbilitiesPlugin__Class* get_class() {
            return il2cpp::get_class<app::AbilitiesPlugin__Class>(type_info, "", "AbilitiesPlugin");
        }
        inline app::AbilitiesPlugin* create() {
            return il2cpp::create_object<app::AbilitiesPlugin>(get_class());
        }
    } // namespace AbilitiesPlugin
} // namespace app::classes::types
