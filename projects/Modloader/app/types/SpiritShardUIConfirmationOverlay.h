#pragma once
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay.h>
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIConfirmationOverlay {
        inline app::SpiritShardUIConfirmationOverlay__Class** type_info() {
            static app::SpiritShardUIConfirmationOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardUIConfirmationOverlay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardUIConfirmationOverlay__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIConfirmationOverlay__Class>(type_info(), "", "SpiritShardUIConfirmationOverlay");
        }
        inline app::SpiritShardUIConfirmationOverlay* create() {
            return il2cpp::create_object<app::SpiritShardUIConfirmationOverlay>(get_class());
        }
    } // namespace SpiritShardUIConfirmationOverlay
} // namespace app::classes::types
