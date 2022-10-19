#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardUIShardSocket__Array {
        inline app::SpiritShardUIShardSocket__Array__Class** type_info = (app::SpiritShardUIShardSocket__Array__Class**)(modloader::win::memory::resolve_rva(0x0478DB60));
        inline app::SpiritShardUIShardSocket__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardSocket__Array__Class>(type_info, "", "SpiritShardUIShardSocket[]");
        }
        inline app::SpiritShardUIShardSocket__Array* create() {
            return il2cpp::create_object<app::SpiritShardUIShardSocket__Array>(get_class());
        }
    } // namespace SpiritShardUIShardSocket__Array
} // namespace app::classes::types
