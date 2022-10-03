#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinInvisibilitySpell {
        namespace {
            app::SeinInvisibilitySpell__Class* type_info_ref = nullptr;
        }
        app::SeinInvisibilitySpell__Class** type_info = &type_info_ref;
        inline app::SeinInvisibilitySpell__Class* get_class() {
            return il2cpp::get_class<app::SeinInvisibilitySpell__Class>(type_info, "", "SeinInvisibilitySpell");
        }
        inline app::SeinInvisibilitySpell* create() {
            return il2cpp::create_object<app::SeinInvisibilitySpell>(get_class());
        }
    } // namespace SeinInvisibilitySpell
} // namespace app::classes::types
