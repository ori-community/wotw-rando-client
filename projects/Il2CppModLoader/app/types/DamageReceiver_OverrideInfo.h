#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageReceiver_OverrideInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageReceiver_OverrideInfo__Class** type_info;
        inline app::DamageReceiver_OverrideInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiver_OverrideInfo__Class>(type_info, "Moon", "DamageReceiver", "OverrideInfo");
        }
        inline app::DamageReceiver_OverrideInfo* create() {
            return il2cpp::create_object<app::DamageReceiver_OverrideInfo>(get_class());
        }
        inline app::DamageReceiver_OverrideInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageReceiver_OverrideInfo__Array>(get_class(), size);
        }
    } // namespace DamageReceiver_OverrideInfo
} // namespace app::classes::types
