#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterGravity {
        namespace {
            app::CharacterGravity__Class* type_info_ref = nullptr;
        }
        app::CharacterGravity__Class** type_info = &type_info_ref;
        inline app::CharacterGravity__Class* get_class() {
            return il2cpp::get_class<app::CharacterGravity__Class>(type_info, "", "CharacterGravity");
        }
        inline app::CharacterGravity* create() {
            return il2cpp::create_object<app::CharacterGravity>(get_class());
        }
    } // namespace CharacterGravity
} // namespace app::classes::types
