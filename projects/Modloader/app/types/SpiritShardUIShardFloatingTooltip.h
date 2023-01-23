#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritShardUIShardFloatingTooltip__Class.h>
#include <Modloader/app/structs/SpiritShardUIShardFloatingTooltip.h>

namespace app::classes::types {
    namespace SpiritShardUIShardFloatingTooltip {
        namespace {
            inline app::SpiritShardUIShardFloatingTooltip__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardUIShardFloatingTooltip__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIShardFloatingTooltip__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardFloatingTooltip__Class>(type_info, "", "SpiritShardUIShardFloatingTooltip");
        }
        inline app::SpiritShardUIShardFloatingTooltip* create() {
            return il2cpp::create_object<app::SpiritShardUIShardFloatingTooltip>(get_class());
        }
    } // namespace SpiritShardUIShardFloatingTooltip
} // namespace app::classes::types
