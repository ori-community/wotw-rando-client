#pragma once
#include <Modloader/app/structs/CharacterStatePuppet.h>
#include <Modloader/app/structs/CharacterStatePuppet__Array.h>
#include <Modloader/app/structs/CharacterStatePuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterStatePuppet {
        inline app::CharacterStatePuppet__Class** type_info() {
            static app::CharacterStatePuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterStatePuppet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterStatePuppet__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatePuppet__Class>(type_info(), "", "CharacterStatePuppet");
        }
        inline app::CharacterStatePuppet* create() {
            return il2cpp::create_object<app::CharacterStatePuppet>(get_class());
        }
        inline app::CharacterStatePuppet__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterStatePuppet__Array>(get_class(), size);
        }
        inline app::CharacterStatePuppet__Array* create_array(const std::vector<app::CharacterStatePuppet*>& items) {
            return il2cpp::array_new<app::CharacterStatePuppet__Array>(get_class(), items);
        }
    } // namespace CharacterStatePuppet
} // namespace app::classes::types
