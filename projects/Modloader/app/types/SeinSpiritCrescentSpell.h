#pragma once
#include <Modloader/app/structs/SeinSpiritCrescentSpell.h>
#include <Modloader/app/structs/SeinSpiritCrescentSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritCrescentSpell {
        inline app::SeinSpiritCrescentSpell__Class** type_info() {
            static app::SeinSpiritCrescentSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritCrescentSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritCrescentSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritCrescentSpell__Class>(type_info(), "", "SeinSpiritCrescentSpell");
        }
        inline app::SeinSpiritCrescentSpell* create() {
            return il2cpp::create_object<app::SeinSpiritCrescentSpell>(get_class());
        }
    } // namespace SeinSpiritCrescentSpell
} // namespace app::classes::types
