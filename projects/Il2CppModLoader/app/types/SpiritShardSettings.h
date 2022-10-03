#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardSettings__Class** type_info;
        inline app::SpiritShardSettings__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardSettings__Class>(type_info, "", "SpiritShardSettings");
        }
        inline app::SpiritShardSettings* create() {
            return il2cpp::create_object<app::SpiritShardSettings>(get_class());
        }
    } // namespace SpiritShardSettings
} // namespace app::classes::types
