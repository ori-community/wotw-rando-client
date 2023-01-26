#pragma once
#include <Modloader/app/structs/CharacterData__Array.h>
#include <Modloader/app/structs/CharacterData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterData__Array {
        inline app::CharacterData__Array__Class** type_info() {
            static app::CharacterData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterData__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterData__Array__Class>(type_info(), "", "CharacterData[]");
        }
        inline app::CharacterData__Array* create() {
            return il2cpp::create_object<app::CharacterData__Array>(get_class());
        }
    } // namespace CharacterData__Array
} // namespace app::classes::types
