#pragma once
#include <Modloader/app/structs/CharacterLeftRightMovement_c.h>
#include <Modloader/app/structs/CharacterLeftRightMovement_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterLeftRightMovement_c {
        inline app::CharacterLeftRightMovement_c__Class** type_info() {
            static app::CharacterLeftRightMovement_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterLeftRightMovement_c__Class**)(modloader::win::memory::resolve_rva(0x04735548));
            }
            return cache;
        }
        inline app::CharacterLeftRightMovement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterLeftRightMovement_c__Class>(type_info(), "", "CharacterLeftRightMovement", "<>c");
        }
        inline app::CharacterLeftRightMovement_c* create() {
            return il2cpp::create_object<app::CharacterLeftRightMovement_c>(get_class());
        }
    } // namespace CharacterLeftRightMovement_c
} // namespace app::classes::types
