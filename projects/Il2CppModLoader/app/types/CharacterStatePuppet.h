#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterStatePuppet {
        namespace {
            app::CharacterStatePuppet__Class* type_info_ref = nullptr;
        }
        app::CharacterStatePuppet__Class** type_info = &type_info_ref;
        inline app::CharacterStatePuppet__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatePuppet__Class>(type_info, "", "CharacterStatePuppet");
        }
        inline app::CharacterStatePuppet* create() {
            return il2cpp::create_object<app::CharacterStatePuppet>(get_class());
        }
        inline app::CharacterStatePuppet__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterStatePuppet__Array>(get_class(), size);
        }
    } // namespace CharacterStatePuppet
} // namespace app::classes::types
