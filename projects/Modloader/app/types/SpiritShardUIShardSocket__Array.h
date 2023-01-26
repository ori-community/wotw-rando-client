#pragma once
#include <Modloader/app/structs/SpiritShardUIShardSocket__Array.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIShardSocket__Array {
        inline app::SpiritShardUIShardSocket__Array__Class** type_info() {
            static app::SpiritShardUIShardSocket__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardUIShardSocket__Array__Class**)(modloader::win::memory::resolve_rva(0x0478DB60));
            }
            return cache;
        }
        inline app::SpiritShardUIShardSocket__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardSocket__Array__Class>(type_info(), "", "SpiritShardUIShardSocket[]");
        }
        inline app::SpiritShardUIShardSocket__Array* create() {
            return il2cpp::create_object<app::SpiritShardUIShardSocket__Array>(get_class());
        }
    } // namespace SpiritShardUIShardSocket__Array
} // namespace app::classes::types
