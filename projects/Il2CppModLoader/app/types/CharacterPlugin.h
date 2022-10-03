#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterPlugin {
        namespace {
            app::CharacterPlugin__Class* type_info_ref = nullptr;
        }
        app::CharacterPlugin__Class** type_info = &type_info_ref;
        inline app::CharacterPlugin__Class* get_class() {
            return il2cpp::get_class<app::CharacterPlugin__Class>(type_info, "", "CharacterPlugin");
        }
        inline app::CharacterPlugin* create() {
            return il2cpp::create_object<app::CharacterPlugin>(get_class());
        }
    } // namespace CharacterPlugin
} // namespace app::classes::types
