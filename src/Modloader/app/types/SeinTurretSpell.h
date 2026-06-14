#pragma once
#include <Modloader/app/structs/SeinTurretSpell.h>
#include <Modloader/app/structs/SeinTurretSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinTurretSpell {
        inline app::SeinTurretSpell__Class** type_info() {
            static app::SeinTurretSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinTurretSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinTurretSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTurretSpell__Class>(type_info(), "", "SeinTurretSpell");
        }
        inline app::SeinTurretSpell* create() {
            return il2cpp::create_object<app::SeinTurretSpell>(get_class());
        }
    } // namespace SeinTurretSpell
} // namespace app::classes::types
