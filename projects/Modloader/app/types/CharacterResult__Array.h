#pragma once
#include <Modloader/app/structs/CharacterResult__Array.h>
#include <Modloader/app/structs/CharacterResult__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterResult__Array {
        inline app::CharacterResult__Array__Class** type_info() {
            static app::CharacterResult__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterResult__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterResult__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterResult__Array__Class>(type_info(), "PlayFab.ClientModels", "CharacterResult[]");
        }
        inline app::CharacterResult__Array* create() {
            return il2cpp::create_object<app::CharacterResult__Array>(get_class());
        }
    } // namespace CharacterResult__Array
} // namespace app::classes::types
