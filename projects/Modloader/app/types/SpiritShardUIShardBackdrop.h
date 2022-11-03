#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardUIShardBackdrop {
        namespace {
            inline app::SpiritShardUIShardBackdrop__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardUIShardBackdrop__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIShardBackdrop__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardBackdrop__Class>(type_info, "", "SpiritShardUIShardBackdrop");
        }
        inline app::SpiritShardUIShardBackdrop* create() {
            return il2cpp::create_object<app::SpiritShardUIShardBackdrop>(get_class());
        }
    } // namespace SpiritShardUIShardBackdrop
} // namespace app::classes::types
