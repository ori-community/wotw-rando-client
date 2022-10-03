#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinMeditateSpell_State__Enum {
        namespace {
            app::SeinMeditateSpell_State__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinMeditateSpell_State__Enum__Class** type_info = &type_info_ref;
        inline app::SeinMeditateSpell_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinMeditateSpell_State__Enum__Class>(type_info, "", "SeinMeditateSpell", "State");
        }
        inline app::SeinMeditateSpell_State__Enum* create() {
            return il2cpp::create_object<app::SeinMeditateSpell_State__Enum>(get_class());
        }
    } // namespace SeinMeditateSpell_State__Enum
} // namespace app::classes::types
