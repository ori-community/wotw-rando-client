#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BlazeSetupInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinBlazeSpell_BlazeSetupInfo__Array__Class** type_info;
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinBlazeSpell_BlazeSetupInfo__Array__Class>(type_info, "", "SeinBlazeSpell+BlazeSetupInfo[]");
        }
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BlazeSetupInfo__Array>(get_class());
        }
    } // namespace SeinBlazeSpell_BlazeSetupInfo__Array
} // namespace app::classes::types
