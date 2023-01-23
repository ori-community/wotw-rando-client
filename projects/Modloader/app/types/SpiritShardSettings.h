#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritShardSettings__Class.h>
#include <Modloader/app/structs/SpiritShardSettings.h>

namespace app::classes::types {
    namespace SpiritShardSettings {
        inline app::SpiritShardSettings__Class** type_info = (app::SpiritShardSettings__Class**)(modloader::win::memory::resolve_rva(0x04782028));
        inline app::SpiritShardSettings__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardSettings__Class>(type_info, "", "SpiritShardSettings");
        }
        inline app::SpiritShardSettings* create() {
            return il2cpp::create_object<app::SpiritShardSettings>(get_class());
        }
    } // namespace SpiritShardSettings
} // namespace app::classes::types
