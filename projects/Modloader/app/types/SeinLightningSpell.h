#pragma once
#include <Modloader/app/structs/SeinLightningSpell.h>
#include <Modloader/app/structs/SeinLightningSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLightningSpell {
        inline app::SeinLightningSpell__Class** type_info() {
            static app::SeinLightningSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLightningSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLightningSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLightningSpell__Class>(type_info(), "", "SeinLightningSpell");
        }
        inline app::SeinLightningSpell* create() {
            return il2cpp::create_object<app::SeinLightningSpell>(get_class());
        }
    } // namespace SeinLightningSpell
} // namespace app::classes::types
