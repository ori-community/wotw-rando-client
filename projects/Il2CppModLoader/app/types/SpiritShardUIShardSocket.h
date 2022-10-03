#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIShardSocket {
        namespace {
            app::SpiritShardUIShardSocket__Class* type_info_ref = nullptr;
        }
        app::SpiritShardUIShardSocket__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIShardSocket__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardSocket__Class>(type_info, "", "SpiritShardUIShardSocket");
        }
        inline app::SpiritShardUIShardSocket* create() {
            return il2cpp::create_object<app::SpiritShardUIShardSocket>(get_class());
        }
        inline app::SpiritShardUIShardSocket__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritShardUIShardSocket__Array>(get_class(), size);
        }
    } // namespace SpiritShardUIShardSocket
} // namespace app::classes::types
