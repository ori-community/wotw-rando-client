#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyEntityDamageReciever_ModifyDamageDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class** type_info;
        inline app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class>(type_info, "", "LegacyEntityDamageReciever", "ModifyDamageDelegate");
        }
        inline app::LegacyEntityDamageReciever_ModifyDamageDelegate* create() {
            return il2cpp::create_object<app::LegacyEntityDamageReciever_ModifyDamageDelegate>(get_class());
        }
    } // namespace LegacyEntityDamageReciever_ModifyDamageDelegate
} // namespace app::classes::types
