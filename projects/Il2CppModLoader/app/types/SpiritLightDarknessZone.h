#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightDarknessZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritLightDarknessZone__Class** type_info;
        inline app::SpiritLightDarknessZone__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightDarknessZone__Class>(type_info, "", "SpiritLightDarknessZone");
        }
        inline app::SpiritLightDarknessZone* create() {
            return il2cpp::create_object<app::SpiritLightDarknessZone>(get_class());
        }
        inline app::SpiritLightDarknessZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLightDarknessZone__Array>(get_class(), size);
        }
    } // namespace SpiritLightDarknessZone
} // namespace app::classes::types
