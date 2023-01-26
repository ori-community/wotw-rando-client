#pragma once
#include <Modloader/app/structs/SeinRoundupLeashSpell.h>
#include <Modloader/app/structs/SeinRoundupLeashSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRoundupLeashSpell {
        inline app::SeinRoundupLeashSpell__Class** type_info() {
            static app::SeinRoundupLeashSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinRoundupLeashSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinRoundupLeashSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinRoundupLeashSpell__Class>(type_info(), "", "SeinRoundupLeashSpell");
        }
        inline app::SeinRoundupLeashSpell* create() {
            return il2cpp::create_object<app::SeinRoundupLeashSpell>(get_class());
        }
    } // namespace SeinRoundupLeashSpell
} // namespace app::classes::types
