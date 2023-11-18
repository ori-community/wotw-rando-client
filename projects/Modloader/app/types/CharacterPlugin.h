#pragma once
#include <Modloader/app/structs/CharacterPlugin.h>
#include <Modloader/app/structs/CharacterPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterPlugin {
        inline app::CharacterPlugin__Class** type_info() {
            static app::CharacterPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterPlugin__Class* get_class() {
            return il2cpp::get_class<app::CharacterPlugin__Class>(type_info(), "", "CharacterPlugin");
        }
        inline app::CharacterPlugin* create() {
            return il2cpp::create_object<app::CharacterPlugin>(get_class());
        }
    } // namespace CharacterPlugin
} // namespace app::classes::types
