#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterState {
        namespace {
            app::CharacterState__Class* type_info_ref = nullptr;
        }
        app::CharacterState__Class** type_info = &type_info_ref;
        inline app::CharacterState__Class* get_class() {
            return il2cpp::get_class<app::CharacterState__Class>(type_info, "", "CharacterState");
        }
        inline app::CharacterState* create() {
            return il2cpp::create_object<app::CharacterState>(get_class());
        }
        inline app::CharacterState__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterState__Array>(get_class(), size);
        }
    } // namespace CharacterState
} // namespace app::classes::types
