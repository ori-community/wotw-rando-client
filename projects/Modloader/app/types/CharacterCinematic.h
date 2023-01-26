#pragma once
#include <Modloader/app/structs/CharacterCinematic.h>
#include <Modloader/app/structs/CharacterCinematic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterCinematic {
        inline app::CharacterCinematic__Class** type_info() {
            static app::CharacterCinematic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterCinematic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterCinematic__Class* get_class() {
            return il2cpp::get_class<app::CharacterCinematic__Class>(type_info(), "", "CharacterCinematic");
        }
        inline app::CharacterCinematic* create() {
            return il2cpp::create_object<app::CharacterCinematic>(get_class());
        }
    } // namespace CharacterCinematic
} // namespace app::classes::types
