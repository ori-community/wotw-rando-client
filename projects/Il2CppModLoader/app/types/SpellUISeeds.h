#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUISeeds {
        namespace {
            app::SpellUISeeds__Class* type_info_ref = nullptr;
        }
        app::SpellUISeeds__Class** type_info = &type_info_ref;
        inline app::SpellUISeeds__Class* get_class() {
            return il2cpp::get_class<app::SpellUISeeds__Class>(type_info, "", "SpellUISeeds");
        }
        inline app::SpellUISeeds* create() {
            return il2cpp::create_object<app::SpellUISeeds>(get_class());
        }
    } // namespace SpellUISeeds
} // namespace app::classes::types
