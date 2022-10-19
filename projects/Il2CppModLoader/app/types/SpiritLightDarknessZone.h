#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLightDarknessZone {
        inline app::SpiritLightDarknessZone__Class** type_info = (app::SpiritLightDarknessZone__Class**)(modloader::win::memory::resolve_rva(0x0474B468));
        inline app::SpiritLightDarknessZone__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightDarknessZone__Class>(type_info, "", "SpiritLightDarknessZone");
        }
        inline app::SpiritLightDarknessZone* create() {
            return il2cpp::create_object<app::SpiritLightDarknessZone>(get_class());
        }
        inline app::SpiritLightDarknessZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLightDarknessZone__Array>(get_class(), size);
        }
        inline app::SpiritLightDarknessZone__Array* create_array(const std::vector<app::SpiritLightDarknessZone*>& items) {
            return il2cpp::array_new<app::SpiritLightDarknessZone__Array>(get_class(), items);
        }
    } // namespace SpiritLightDarknessZone
} // namespace app::classes::types
