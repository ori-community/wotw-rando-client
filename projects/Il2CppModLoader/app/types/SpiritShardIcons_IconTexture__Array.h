#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIcons_IconTexture__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardIcons_IconTexture__Array__Class** type_info;
        inline app::SpiritShardIcons_IconTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIcons_IconTexture__Array__Class>(type_info, "", "SpiritShardIcons+IconTexture[]");
        }
        inline app::SpiritShardIcons_IconTexture__Array* create() {
            return il2cpp::create_object<app::SpiritShardIcons_IconTexture__Array>(get_class());
        }
    } // namespace SpiritShardIcons_IconTexture__Array
} // namespace app::classes::types
