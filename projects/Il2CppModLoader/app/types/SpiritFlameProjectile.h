#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritFlameProjectile {
        inline app::SpiritFlameProjectile__Class** type_info = (app::SpiritFlameProjectile__Class**)(modloader::win::memory::resolve_rva(0x0474FF18));
        inline app::SpiritFlameProjectile__Class* get_class() {
            return il2cpp::get_class<app::SpiritFlameProjectile__Class>(type_info, "", "SpiritFlameProjectile");
        }
        inline app::SpiritFlameProjectile* create() {
            return il2cpp::create_object<app::SpiritFlameProjectile>(get_class());
        }
    } // namespace SpiritFlameProjectile
} // namespace app::classes::types
