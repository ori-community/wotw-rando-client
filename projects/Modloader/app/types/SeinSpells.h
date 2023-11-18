#pragma once
#include <Modloader/app/structs/SeinSpells.h>
#include <Modloader/app/structs/SeinSpells__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpells {
        inline app::SeinSpells__Class** type_info() {
            static app::SeinSpells__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpells__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpells__Class* get_class() {
            return il2cpp::get_class<app::SeinSpells__Class>(type_info(), "", "SeinSpells");
        }
        inline app::SeinSpells* create() {
            return il2cpp::create_object<app::SeinSpells>(get_class());
        }
    } // namespace SeinSpells
} // namespace app::classes::types
