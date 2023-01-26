#pragma once
#include <Modloader/app/structs/SeinHomingMissileSpell.h>
#include <Modloader/app/structs/SeinHomingMissileSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHomingMissileSpell {
        inline app::SeinHomingMissileSpell__Class** type_info() {
            static app::SeinHomingMissileSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHomingMissileSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHomingMissileSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinHomingMissileSpell__Class>(type_info(), "", "SeinHomingMissileSpell");
        }
        inline app::SeinHomingMissileSpell* create() {
            return il2cpp::create_object<app::SeinHomingMissileSpell>(get_class());
        }
    } // namespace SeinHomingMissileSpell
} // namespace app::classes::types
