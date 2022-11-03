#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardPickupContext {
        inline app::SpiritShardPickupContext__Class** type_info = (app::SpiritShardPickupContext__Class**)(modloader::win::memory::resolve_rva(0x047455D8));
        inline app::SpiritShardPickupContext__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardPickupContext__Class>(type_info, "", "SpiritShardPickupContext");
        }
        inline app::SpiritShardPickupContext* create() {
            return il2cpp::create_object<app::SpiritShardPickupContext>(get_class());
        }
    } // namespace SpiritShardPickupContext
} // namespace app::classes::types
