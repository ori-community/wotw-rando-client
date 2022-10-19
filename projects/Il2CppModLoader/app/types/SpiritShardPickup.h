#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardPickup {
        inline app::SpiritShardPickup__Class** type_info = (app::SpiritShardPickup__Class**)(modloader::win::memory::resolve_rva(0x047063F0));
        inline app::SpiritShardPickup__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardPickup__Class>(type_info, "", "SpiritShardPickup");
        }
        inline app::SpiritShardPickup* create() {
            return il2cpp::create_object<app::SpiritShardPickup>(get_class());
        }
    } // namespace SpiritShardPickup
} // namespace app::classes::types
