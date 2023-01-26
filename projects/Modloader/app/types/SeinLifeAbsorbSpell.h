#pragma once
#include <Modloader/app/structs/SeinLifeAbsorbSpell.h>
#include <Modloader/app/structs/SeinLifeAbsorbSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLifeAbsorbSpell {
        inline app::SeinLifeAbsorbSpell__Class** type_info() {
            static app::SeinLifeAbsorbSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLifeAbsorbSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLifeAbsorbSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLifeAbsorbSpell__Class>(type_info(), "", "SeinLifeAbsorbSpell");
        }
        inline app::SeinLifeAbsorbSpell* create() {
            return il2cpp::create_object<app::SeinLifeAbsorbSpell>(get_class());
        }
    } // namespace SeinLifeAbsorbSpell
} // namespace app::classes::types
