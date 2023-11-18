#pragma once
#include <Modloader/app/structs/CharacterAbility.h>
#include <Modloader/app/structs/CharacterAbility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAbility {
        inline app::CharacterAbility__Class** type_info() {
            static app::CharacterAbility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterAbility__Class**)(modloader::win::memory::resolve_rva(0x04780D70));
            }
            return cache;
        }
        inline app::CharacterAbility__Class* get_class() {
            return il2cpp::get_class<app::CharacterAbility__Class>(type_info(), "", "CharacterAbility");
        }
        inline app::CharacterAbility* create() {
            return il2cpp::create_object<app::CharacterAbility>(get_class());
        }
    } // namespace CharacterAbility
} // namespace app::classes::types
