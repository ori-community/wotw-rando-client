#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritFlameProjectileOffsetGenerator {
        inline app::SpiritFlameProjectileOffsetGenerator__Class** type_info = (app::SpiritFlameProjectileOffsetGenerator__Class**)(modloader::win::memory::resolve_rva(0x0475A378));
        inline app::SpiritFlameProjectileOffsetGenerator__Class* get_class() {
            return il2cpp::get_class<app::SpiritFlameProjectileOffsetGenerator__Class>(type_info, "", "SpiritFlameProjectileOffsetGenerator");
        }
        inline app::SpiritFlameProjectileOffsetGenerator* create() {
            return il2cpp::create_object<app::SpiritFlameProjectileOffsetGenerator>(get_class());
        }
    } // namespace SpiritFlameProjectileOffsetGenerator
} // namespace app::classes::types
