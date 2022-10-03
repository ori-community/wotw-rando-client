#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyEntityDamageReciever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyEntityDamageReciever__Class** type_info;
        inline app::LegacyEntityDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntityDamageReciever__Class>(type_info, "", "LegacyEntityDamageReciever");
        }
        inline app::LegacyEntityDamageReciever* create() {
            return il2cpp::create_object<app::LegacyEntityDamageReciever>(get_class());
        }
        inline app::LegacyEntityDamageReciever__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyEntityDamageReciever__Array>(get_class(), size);
        }
    } // namespace LegacyEntityDamageReciever
} // namespace app::classes::types
