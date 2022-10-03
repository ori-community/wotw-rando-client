#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardPickupContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardPickupContext__Class** type_info;
        inline app::SpiritShardPickupContext__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardPickupContext__Class>(type_info, "", "SpiritShardPickupContext");
        }
        inline app::SpiritShardPickupContext* create() {
            return il2cpp::create_object<app::SpiritShardPickupContext>(get_class());
        }
    } // namespace SpiritShardPickupContext
} // namespace app::classes::types
