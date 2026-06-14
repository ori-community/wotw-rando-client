#pragma once
#include <Modloader/app/structs/SeinBlazeSpell.h>
#include <Modloader/app/structs/SeinBlazeSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell {
        inline app::SeinBlazeSpell__Class** type_info() {
            static app::SeinBlazeSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBlazeSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBlazeSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinBlazeSpell__Class>(type_info(), "", "SeinBlazeSpell");
        }
        inline app::SeinBlazeSpell* create() {
            return il2cpp::create_object<app::SeinBlazeSpell>(get_class());
        }
    } // namespace SeinBlazeSpell
} // namespace app::classes::types
