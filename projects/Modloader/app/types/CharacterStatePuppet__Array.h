#pragma once
#include <Modloader/app/structs/CharacterStatePuppet__Array.h>
#include <Modloader/app/structs/CharacterStatePuppet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterStatePuppet__Array {
        inline app::CharacterStatePuppet__Array__Class** type_info() {
            static app::CharacterStatePuppet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterStatePuppet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterStatePuppet__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatePuppet__Array__Class>(type_info(), "", "CharacterStatePuppet[]");
        }
        inline app::CharacterStatePuppet__Array* create() {
            return il2cpp::create_object<app::CharacterStatePuppet__Array>(get_class());
        }
    } // namespace CharacterStatePuppet__Array
} // namespace app::classes::types
