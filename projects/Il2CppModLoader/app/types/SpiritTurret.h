#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritTurret {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritTurret__Class** type_info;
        inline app::SpiritTurret__Class* get_class() {
            return il2cpp::get_class<app::SpiritTurret__Class>(type_info, "", "SpiritTurret");
        }
        inline app::SpiritTurret* create() {
            return il2cpp::create_object<app::SpiritTurret>(get_class());
        }
        inline app::SpiritTurret__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritTurret__Array>(get_class(), size);
        }
    } // namespace SpiritTurret
} // namespace app::classes::types
