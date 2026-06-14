#pragma once
#include <Modloader/app/structs/CharacterJumpSustain.h>
#include <Modloader/app/structs/CharacterJumpSustain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterJumpSustain {
        inline app::CharacterJumpSustain__Class** type_info() {
            static app::CharacterJumpSustain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterJumpSustain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterJumpSustain__Class* get_class() {
            return il2cpp::get_class<app::CharacterJumpSustain__Class>(type_info(), "", "CharacterJumpSustain");
        }
        inline app::CharacterJumpSustain* create() {
            return il2cpp::create_object<app::CharacterJumpSustain>(get_class());
        }
    } // namespace CharacterJumpSustain
} // namespace app::classes::types
