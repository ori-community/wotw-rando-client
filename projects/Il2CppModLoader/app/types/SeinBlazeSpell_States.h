#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinBlazeSpell_States__Class** type_info;
        inline app::SeinBlazeSpell_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBlazeSpell_States__Class>(type_info, "", "SeinBlazeSpell", "States");
        }
        inline app::SeinBlazeSpell_States* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_States>(get_class());
        }
    } // namespace SeinBlazeSpell_States
} // namespace app::classes::types
