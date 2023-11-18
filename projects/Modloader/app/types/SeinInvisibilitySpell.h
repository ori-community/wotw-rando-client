#pragma once
#include <Modloader/app/structs/SeinInvisibilitySpell.h>
#include <Modloader/app/structs/SeinInvisibilitySpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinInvisibilitySpell {
        inline app::SeinInvisibilitySpell__Class** type_info() {
            static app::SeinInvisibilitySpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinInvisibilitySpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinInvisibilitySpell__Class* get_class() {
            return il2cpp::get_class<app::SeinInvisibilitySpell__Class>(type_info(), "", "SeinInvisibilitySpell");
        }
        inline app::SeinInvisibilitySpell* create() {
            return il2cpp::create_object<app::SeinInvisibilitySpell>(get_class());
        }
    } // namespace SeinInvisibilitySpell
} // namespace app::classes::types
