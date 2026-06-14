#pragma once
#include <Modloader/app/structs/CharacterGravity_c.h>
#include <Modloader/app/structs/CharacterGravity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterGravity_c {
        inline app::CharacterGravity_c__Class** type_info() {
            static app::CharacterGravity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterGravity_c__Class**)(modloader::win::memory::resolve_rva(0x04789200));
            }
            return cache;
        }
        inline app::CharacterGravity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterGravity_c__Class>(type_info(), "", "CharacterGravity", "<>c");
        }
        inline app::CharacterGravity_c* create() {
            return il2cpp::create_object<app::CharacterGravity_c>(get_class());
        }
    } // namespace CharacterGravity_c
} // namespace app::classes::types
