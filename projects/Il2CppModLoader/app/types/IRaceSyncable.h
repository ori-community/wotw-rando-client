#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRaceSyncable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRaceSyncable__Class** type_info;
        inline app::IRaceSyncable__Class* get_class() {
            return il2cpp::get_class<app::IRaceSyncable__Class>(type_info, "Moon", "IRaceSyncable");
        }
        inline app::IRaceSyncable* create() {
            return il2cpp::create_object<app::IRaceSyncable>(get_class());
        }
    } // namespace IRaceSyncable
} // namespace app::classes::types
