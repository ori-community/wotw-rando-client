#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket__Class.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket__Array.h>

namespace app::classes::types {
    namespace SpiritShardUIShardSocket {
        namespace {
            inline app::SpiritShardUIShardSocket__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardUIShardSocket__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIShardSocket__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardSocket__Class>(type_info, "", "SpiritShardUIShardSocket");
        }
        inline app::SpiritShardUIShardSocket* create() {
            return il2cpp::create_object<app::SpiritShardUIShardSocket>(get_class());
        }
        inline app::SpiritShardUIShardSocket__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritShardUIShardSocket__Array>(get_class(), size);
        }
        inline app::SpiritShardUIShardSocket__Array* create_array(const std::vector<app::SpiritShardUIShardSocket*>& items) {
            return il2cpp::array_new<app::SpiritShardUIShardSocket__Array>(get_class(), items);
        }
    } // namespace SpiritShardUIShardSocket
} // namespace app::classes::types
