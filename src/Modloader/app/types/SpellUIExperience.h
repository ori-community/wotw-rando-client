#pragma once
#include <Modloader/app/structs/SpellUIExperience.h>
#include <Modloader/app/structs/SpellUIExperience__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIExperience {
        inline app::SpellUIExperience__Class** type_info() {
            static app::SpellUIExperience__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIExperience__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIExperience__Class* get_class() {
            return il2cpp::get_class<app::SpellUIExperience__Class>(type_info(), "", "SpellUIExperience");
        }
        inline app::SpellUIExperience* create() {
            return il2cpp::create_object<app::SpellUIExperience>(get_class());
        }
    } // namespace SpellUIExperience
} // namespace app::classes::types
