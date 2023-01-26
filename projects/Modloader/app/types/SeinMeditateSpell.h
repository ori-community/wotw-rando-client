#pragma once
#include <Modloader/app/structs/SeinMeditateSpell.h>
#include <Modloader/app/structs/SeinMeditateSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMeditateSpell {
        inline app::SeinMeditateSpell__Class** type_info() {
            static app::SeinMeditateSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMeditateSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMeditateSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMeditateSpell__Class>(type_info(), "", "SeinMeditateSpell");
        }
        inline app::SeinMeditateSpell* create() {
            return il2cpp::create_object<app::SeinMeditateSpell>(get_class());
        }
    } // namespace SeinMeditateSpell
} // namespace app::classes::types
