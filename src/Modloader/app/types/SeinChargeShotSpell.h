#pragma once
#include <Modloader/app/structs/SeinChargeShotSpell.h>
#include <Modloader/app/structs/SeinChargeShotSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeShotSpell {
        inline app::SeinChargeShotSpell__Class** type_info() {
            static app::SeinChargeShotSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChargeShotSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChargeShotSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeShotSpell__Class>(type_info(), "", "SeinChargeShotSpell");
        }
        inline app::SeinChargeShotSpell* create() {
            return il2cpp::create_object<app::SeinChargeShotSpell>(get_class());
        }
    } // namespace SeinChargeShotSpell
} // namespace app::classes::types
