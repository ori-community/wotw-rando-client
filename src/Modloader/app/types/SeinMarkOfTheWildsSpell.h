#pragma once
#include <Modloader/app/structs/SeinMarkOfTheWildsSpell.h>
#include <Modloader/app/structs/SeinMarkOfTheWildsSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMarkOfTheWildsSpell {
        inline app::SeinMarkOfTheWildsSpell__Class** type_info() {
            static app::SeinMarkOfTheWildsSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMarkOfTheWildsSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMarkOfTheWildsSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMarkOfTheWildsSpell__Class>(type_info(), "", "SeinMarkOfTheWildsSpell");
        }
        inline app::SeinMarkOfTheWildsSpell* create() {
            return il2cpp::create_object<app::SeinMarkOfTheWildsSpell>(get_class());
        }
    } // namespace SeinMarkOfTheWildsSpell
} // namespace app::classes::types
