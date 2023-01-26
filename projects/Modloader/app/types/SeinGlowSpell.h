#pragma once
#include <Modloader/app/structs/SeinGlowSpell.h>
#include <Modloader/app/structs/SeinGlowSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell {
        inline app::SeinGlowSpell__Class** type_info() {
            static app::SeinGlowSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGlowSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGlowSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinGlowSpell__Class>(type_info(), "", "SeinGlowSpell");
        }
        inline app::SeinGlowSpell* create() {
            return il2cpp::create_object<app::SeinGlowSpell>(get_class());
        }
    } // namespace SeinGlowSpell
} // namespace app::classes::types
