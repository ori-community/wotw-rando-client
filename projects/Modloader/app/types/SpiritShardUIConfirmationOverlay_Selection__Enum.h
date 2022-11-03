#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardUIConfirmationOverlay_Selection__Enum {
        namespace {
            inline app::SpiritShardUIConfirmationOverlay_Selection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardUIConfirmationOverlay_Selection__Enum__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIConfirmationOverlay_Selection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardUIConfirmationOverlay_Selection__Enum__Class>(type_info, "", "SpiritShardUIConfirmationOverlay", "Selection");
        }
        inline app::SpiritShardUIConfirmationOverlay_Selection__Enum* create() {
            return il2cpp::create_object<app::SpiritShardUIConfirmationOverlay_Selection__Enum>(get_class());
        }
    } // namespace SpiritShardUIConfirmationOverlay_Selection__Enum
} // namespace app::classes::types
