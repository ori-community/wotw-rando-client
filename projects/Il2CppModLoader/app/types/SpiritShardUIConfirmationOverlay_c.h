#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardUIConfirmationOverlay_c {
        inline app::SpiritShardUIConfirmationOverlay_c__Class** type_info = (app::SpiritShardUIConfirmationOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x04798068));
        inline app::SpiritShardUIConfirmationOverlay_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardUIConfirmationOverlay_c__Class>(type_info, "", "SpiritShardUIConfirmationOverlay", "<>c");
        }
        inline app::SpiritShardUIConfirmationOverlay_c* create() {
            return il2cpp::create_object<app::SpiritShardUIConfirmationOverlay_c>(get_class());
        }
    } // namespace SpiritShardUIConfirmationOverlay_c
} // namespace app::classes::types
