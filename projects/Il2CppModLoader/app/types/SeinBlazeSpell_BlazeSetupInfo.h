#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BlazeSetupInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinBlazeSpell_BlazeSetupInfo__Class** type_info;
        inline app::SeinBlazeSpell_BlazeSetupInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBlazeSpell_BlazeSetupInfo__Class>(type_info, "", "SeinBlazeSpell", "BlazeSetupInfo");
        }
        inline app::SeinBlazeSpell_BlazeSetupInfo* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BlazeSetupInfo>(get_class());
        }
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinBlazeSpell_BlazeSetupInfo__Array>(get_class(), size);
        }
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array* create_array(const std::vector<app::SeinBlazeSpell_BlazeSetupInfo*>& items) {
            return il2cpp::array_new<app::SeinBlazeSpell_BlazeSetupInfo__Array>(get_class(), items);
        }
    } // namespace SeinBlazeSpell_BlazeSetupInfo
} // namespace app::classes::types
