#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritFlameProjectileOffsetGenerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritFlameProjectileOffsetGenerator__Class** type_info;
        inline app::SpiritFlameProjectileOffsetGenerator__Class* get_class() {
            return il2cpp::get_class<app::SpiritFlameProjectileOffsetGenerator__Class>(type_info, "", "SpiritFlameProjectileOffsetGenerator");
        }
        inline app::SpiritFlameProjectileOffsetGenerator* create() {
            return il2cpp::create_object<app::SpiritFlameProjectileOffsetGenerator>(get_class());
        }
    } // namespace SpiritFlameProjectileOffsetGenerator
} // namespace app::classes::types
