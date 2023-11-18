#pragma once
#include <Modloader/app/structs/SeinTeleportSpell.h>
#include <Modloader/app/structs/SeinTeleportSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinTeleportSpell {
        inline app::SeinTeleportSpell__Class** type_info() {
            static app::SeinTeleportSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinTeleportSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinTeleportSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTeleportSpell__Class>(type_info(), "", "SeinTeleportSpell");
        }
        inline app::SeinTeleportSpell* create() {
            return il2cpp::create_object<app::SeinTeleportSpell>(get_class());
        }
    } // namespace SeinTeleportSpell
} // namespace app::classes::types
