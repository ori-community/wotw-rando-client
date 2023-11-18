#pragma once
#include <Modloader/app/structs/SpellPickup.h>
#include <Modloader/app/structs/SpellPickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellPickup {
        inline app::SpellPickup__Class** type_info() {
            static app::SpellPickup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellPickup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellPickup__Class* get_class() {
            return il2cpp::get_class<app::SpellPickup__Class>(type_info(), "", "SpellPickup");
        }
        inline app::SpellPickup* create() {
            return il2cpp::create_object<app::SpellPickup>(get_class());
        }
    } // namespace SpellPickup
} // namespace app::classes::types
