#pragma once
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/CharacterState__Array.h>
#include <Modloader/app/structs/CharacterState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterState {
        inline app::CharacterState__Class** type_info() {
            static app::CharacterState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterState__Class* get_class() {
            return il2cpp::get_class<app::CharacterState__Class>(type_info(), "", "CharacterState");
        }
        inline app::CharacterState* create() {
            return il2cpp::create_object<app::CharacterState>(get_class());
        }
        inline app::CharacterState__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterState__Array>(get_class(), size);
        }
        inline app::CharacterState__Array* create_array(const std::vector<app::CharacterState*>& items) {
            return il2cpp::array_new<app::CharacterState__Array>(get_class(), items);
        }
    } // namespace CharacterState
} // namespace app::classes::types
