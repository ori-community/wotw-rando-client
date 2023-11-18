#pragma once
#include <Modloader/app/structs/SeinTrapSpell.h>
#include <Modloader/app/structs/SeinTrapSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinTrapSpell {
        inline app::SeinTrapSpell__Class** type_info() {
            static app::SeinTrapSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinTrapSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinTrapSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTrapSpell__Class>(type_info(), "", "SeinTrapSpell");
        }
        inline app::SeinTrapSpell* create() {
            return il2cpp::create_object<app::SeinTrapSpell>(get_class());
        }
    } // namespace SeinTrapSpell
} // namespace app::classes::types
