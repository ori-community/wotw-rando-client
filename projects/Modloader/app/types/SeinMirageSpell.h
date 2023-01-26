#pragma once
#include <Modloader/app/structs/SeinMirageSpell.h>
#include <Modloader/app/structs/SeinMirageSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMirageSpell {
        inline app::SeinMirageSpell__Class** type_info() {
            static app::SeinMirageSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMirageSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMirageSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMirageSpell__Class>(type_info(), "", "SeinMirageSpell");
        }
        inline app::SeinMirageSpell* create() {
            return il2cpp::create_object<app::SeinMirageSpell>(get_class());
        }
    } // namespace SeinMirageSpell
} // namespace app::classes::types
