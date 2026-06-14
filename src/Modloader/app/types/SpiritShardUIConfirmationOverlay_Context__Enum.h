#pragma once
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay_Context__Enum.h>
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay_Context__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIConfirmationOverlay_Context__Enum {
        inline app::SpiritShardUIConfirmationOverlay_Context__Enum__Class** type_info() {
            static app::SpiritShardUIConfirmationOverlay_Context__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardUIConfirmationOverlay_Context__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardUIConfirmationOverlay_Context__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardUIConfirmationOverlay_Context__Enum__Class>(type_info(), "", "SpiritShardUIConfirmationOverlay", "Context");
        }
        inline app::SpiritShardUIConfirmationOverlay_Context__Enum* create() {
            return il2cpp::create_object<app::SpiritShardUIConfirmationOverlay_Context__Enum>(get_class());
        }
    } // namespace SpiritShardUIConfirmationOverlay_Context__Enum
} // namespace app::classes::types
