#pragma once
#include <Modloader/app/structs/CharacterStateComboAdapter.h>
#include <Modloader/app/structs/CharacterStateComboAdapter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterStateComboAdapter {
        inline app::CharacterStateComboAdapter__Class** type_info() {
            static app::CharacterStateComboAdapter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterStateComboAdapter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterStateComboAdapter__Class* get_class() {
            return il2cpp::get_class<app::CharacterStateComboAdapter__Class>(type_info(), "Moon.ComboSystem", "CharacterStateComboAdapter");
        }
        inline app::CharacterStateComboAdapter* create() {
            return il2cpp::create_object<app::CharacterStateComboAdapter>(get_class());
        }
    } // namespace CharacterStateComboAdapter
} // namespace app::classes::types
