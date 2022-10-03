#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHomingMissileSpell {
        namespace {
            app::SeinHomingMissileSpell__Class* type_info_ref = nullptr;
        }
        app::SeinHomingMissileSpell__Class** type_info = &type_info_ref;
        inline app::SeinHomingMissileSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinHomingMissileSpell__Class>(type_info, "", "SeinHomingMissileSpell");
        }
        inline app::SeinHomingMissileSpell* create() {
            return il2cpp::create_object<app::SeinHomingMissileSpell>(get_class());
        }
    } // namespace SeinHomingMissileSpell
} // namespace app::classes::types
