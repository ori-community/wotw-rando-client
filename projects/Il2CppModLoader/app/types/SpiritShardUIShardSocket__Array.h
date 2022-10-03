#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIShardSocket__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardUIShardSocket__Array__Class** type_info;
        inline app::SpiritShardUIShardSocket__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardSocket__Array__Class>(type_info, "", "SpiritShardUIShardSocket[]");
        }
        inline app::SpiritShardUIShardSocket__Array* create() {
            return il2cpp::create_object<app::SpiritShardUIShardSocket__Array>(get_class());
        }
    } // namespace SpiritShardUIShardSocket__Array
} // namespace app::classes::types
