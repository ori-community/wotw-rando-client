#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageReceiver_DamageEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageReceiver_DamageEntry__Class** type_info;
        inline app::DamageReceiver_DamageEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiver_DamageEntry__Class>(type_info, "Moon", "DamageReceiver", "DamageEntry");
        }
        inline app::DamageReceiver_DamageEntry* create() {
            return il2cpp::create_object<app::DamageReceiver_DamageEntry>(get_class());
        }
        inline app::DamageReceiver_DamageEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageReceiver_DamageEntry__Array>(get_class(), size);
        }
    } // namespace DamageReceiver_DamageEntry
} // namespace app::classes::types
