#pragma once
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay_c.h>
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIConfirmationOverlay_c {
        inline app::SpiritShardUIConfirmationOverlay_c__Class** type_info() {
            static app::SpiritShardUIConfirmationOverlay_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardUIConfirmationOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x04798068));
            }
            return cache;
        }
        inline app::SpiritShardUIConfirmationOverlay_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardUIConfirmationOverlay_c__Class>(type_info(), "", "SpiritShardUIConfirmationOverlay", "<>c");
        }
        inline app::SpiritShardUIConfirmationOverlay_c* create() {
            return il2cpp::create_object<app::SpiritShardUIConfirmationOverlay_c>(get_class());
        }
    } // namespace SpiritShardUIConfirmationOverlay_c
} // namespace app::classes::types
