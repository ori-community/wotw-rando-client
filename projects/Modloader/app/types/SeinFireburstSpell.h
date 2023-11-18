#pragma once
#include <Modloader/app/structs/SeinFireburstSpell.h>
#include <Modloader/app/structs/SeinFireburstSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinFireburstSpell {
        inline app::SeinFireburstSpell__Class** type_info() {
            static app::SeinFireburstSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinFireburstSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinFireburstSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinFireburstSpell__Class>(type_info(), "", "SeinFireburstSpell");
        }
        inline app::SeinFireburstSpell* create() {
            return il2cpp::create_object<app::SeinFireburstSpell>(get_class());
        }
    } // namespace SeinFireburstSpell
} // namespace app::classes::types
