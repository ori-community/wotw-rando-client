#pragma once
#include <Modloader/app/structs/SpellUISeeds.h>
#include <Modloader/app/structs/SpellUISeeds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUISeeds {
        inline app::SpellUISeeds__Class** type_info() {
            static app::SpellUISeeds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUISeeds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUISeeds__Class* get_class() {
            return il2cpp::get_class<app::SpellUISeeds__Class>(type_info(), "", "SpellUISeeds");
        }
        inline app::SpellUISeeds* create() {
            return il2cpp::create_object<app::SpellUISeeds>(get_class());
        }
    } // namespace SpellUISeeds
} // namespace app::classes::types
