#pragma once
#include <Modloader/app/structs/SpiritLightDarknessZone.h>
#include <Modloader/app/structs/SpiritLightDarknessZone__Array.h>
#include <Modloader/app/structs/SpiritLightDarknessZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightDarknessZone {
        inline app::SpiritLightDarknessZone__Class** type_info() {
            static app::SpiritLightDarknessZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritLightDarknessZone__Class**)(modloader::win::memory::resolve_rva(0x0474B468));
            }
            return cache;
        }
        inline app::SpiritLightDarknessZone__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightDarknessZone__Class>(type_info(), "", "SpiritLightDarknessZone");
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
