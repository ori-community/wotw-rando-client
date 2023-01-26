#pragma once
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/CharacterTimelineTurning__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterTimelineTurning {
        inline app::CharacterTimelineTurning__Class** type_info() {
            static app::CharacterTimelineTurning__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterTimelineTurning__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterTimelineTurning__Class* get_class() {
            return il2cpp::get_class<app::CharacterTimelineTurning__Class>(type_info(), "", "CharacterTimelineTurning");
        }
        inline app::CharacterTimelineTurning* create() {
            return il2cpp::create_object<app::CharacterTimelineTurning>(get_class());
        }
    } // namespace CharacterTimelineTurning
} // namespace app::classes::types
