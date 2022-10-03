#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterData__Array {
        namespace {
            app::CharacterData__Array__Class* type_info_ref = nullptr;
        }
        app::CharacterData__Array__Class** type_info = &type_info_ref;
        inline app::CharacterData__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterData__Array__Class>(type_info, "", "CharacterData[]");
        }
        inline app::CharacterData__Array* create() {
            return il2cpp::create_object<app::CharacterData__Array>(get_class());
        }
    } // namespace CharacterData__Array
} // namespace app::classes::types
