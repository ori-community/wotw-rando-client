#pragma once
#include <Modloader/app/structs/SpiritLightDarknessZone__Array.h>
#include <Modloader/app/structs/SpiritLightDarknessZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightDarknessZone__Array {
        inline app::SpiritLightDarknessZone__Array__Class** type_info() {
            static app::SpiritLightDarknessZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightDarknessZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightDarknessZone__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightDarknessZone__Array__Class>(type_info(), "", "SpiritLightDarknessZone[]");
        }
        inline app::SpiritLightDarknessZone__Array* create() {
            return il2cpp::create_object<app::SpiritLightDarknessZone__Array>(get_class());
        }
    } // namespace SpiritLightDarknessZone__Array
} // namespace app::classes::types
