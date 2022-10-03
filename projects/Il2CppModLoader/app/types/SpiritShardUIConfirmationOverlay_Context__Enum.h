#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIConfirmationOverlay_Context__Enum {
        namespace {
            app::SpiritShardUIConfirmationOverlay_Context__Enum__Class* type_info_ref = nullptr;
        }
        app::SpiritShardUIConfirmationOverlay_Context__Enum__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIConfirmationOverlay_Context__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardUIConfirmationOverlay_Context__Enum__Class>(type_info, "", "SpiritShardUIConfirmationOverlay", "Context");
        }
        inline app::SpiritShardUIConfirmationOverlay_Context__Enum* create() {
            return il2cpp::create_object<app::SpiritShardUIConfirmationOverlay_Context__Enum>(get_class());
        }
    } // namespace SpiritShardUIConfirmationOverlay_Context__Enum
} // namespace app::classes::types
