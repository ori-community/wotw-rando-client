#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBurrowSpell {
        namespace {
            app::SeinBurrowSpell__Class* type_info_ref = nullptr;
        }
        app::SeinBurrowSpell__Class** type_info = &type_info_ref;
        inline app::SeinBurrowSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinBurrowSpell__Class>(type_info, "", "SeinBurrowSpell");
        }
        inline app::SeinBurrowSpell* create() {
            return il2cpp::create_object<app::SeinBurrowSpell>(get_class());
        }
    } // namespace SeinBurrowSpell
} // namespace app::classes::types
