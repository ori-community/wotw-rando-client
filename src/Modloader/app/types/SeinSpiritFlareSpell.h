#pragma once
#include <Modloader/app/structs/SeinSpiritFlareSpell.h>
#include <Modloader/app/structs/SeinSpiritFlareSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritFlareSpell {
        inline app::SeinSpiritFlareSpell__Class** type_info() {
            static app::SeinSpiritFlareSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritFlareSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritFlareSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritFlareSpell__Class>(type_info(), "", "SeinSpiritFlareSpell");
        }
        inline app::SeinSpiritFlareSpell* create() {
            return il2cpp::create_object<app::SeinSpiritFlareSpell>(get_class());
        }
    } // namespace SeinSpiritFlareSpell
} // namespace app::classes::types
