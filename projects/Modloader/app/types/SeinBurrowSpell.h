#pragma once
#include <Modloader/app/structs/SeinBurrowSpell.h>
#include <Modloader/app/structs/SeinBurrowSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBurrowSpell {
        inline app::SeinBurrowSpell__Class** type_info() {
            static app::SeinBurrowSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBurrowSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBurrowSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinBurrowSpell__Class>(type_info(), "", "SeinBurrowSpell");
        }
        inline app::SeinBurrowSpell* create() {
            return il2cpp::create_object<app::SeinBurrowSpell>(get_class());
        }
    } // namespace SeinBurrowSpell
} // namespace app::classes::types
