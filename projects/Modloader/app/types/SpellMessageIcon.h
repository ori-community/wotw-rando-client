#pragma once
#include <Modloader/app/structs/SpellMessageIcon.h>
#include <Modloader/app/structs/SpellMessageIcon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellMessageIcon {
        inline app::SpellMessageIcon__Class** type_info() {
            static app::SpellMessageIcon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellMessageIcon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::SpellMessageIcon__Class>(type_info(), "", "SpellMessageIcon");
        }
        inline app::SpellMessageIcon* create() {
            return il2cpp::create_object<app::SpellMessageIcon>(get_class());
        }
    } // namespace SpellMessageIcon
} // namespace app::classes::types
