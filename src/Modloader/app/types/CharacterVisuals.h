#pragma once
#include <Modloader/app/structs/CharacterVisuals.h>
#include <Modloader/app/structs/CharacterVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterVisuals {
        inline app::CharacterVisuals__Class** type_info() {
            static app::CharacterVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterVisuals__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterVisuals__Class* get_class() {
            return il2cpp::get_class<app::CharacterVisuals__Class>(type_info(), "", "CharacterVisuals");
        }
        inline app::CharacterVisuals* create() {
            return il2cpp::create_object<app::CharacterVisuals>(get_class());
        }
    } // namespace CharacterVisuals
} // namespace app::classes::types
