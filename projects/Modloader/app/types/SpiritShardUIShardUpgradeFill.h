#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritShardUIShardUpgradeFill__Class.h>
#include <Modloader/app/structs/SpiritShardUIShardUpgradeFill.h>

namespace app::classes::types {
    namespace SpiritShardUIShardUpgradeFill {
        namespace {
            inline app::SpiritShardUIShardUpgradeFill__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardUIShardUpgradeFill__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIShardUpgradeFill__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardUpgradeFill__Class>(type_info, "", "SpiritShardUIShardUpgradeFill");
        }
        inline app::SpiritShardUIShardUpgradeFill* create() {
            return il2cpp::create_object<app::SpiritShardUIShardUpgradeFill>(get_class());
        }
    } // namespace SpiritShardUIShardUpgradeFill
} // namespace app::classes::types
