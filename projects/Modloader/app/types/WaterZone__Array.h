#pragma once
#include <Modloader/app/structs/WaterZone__Array.h>
#include <Modloader/app/structs/WaterZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterZone__Array {
        inline app::WaterZone__Array__Class** type_info() {
            static app::WaterZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterZone__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterZone__Array__Class>(type_info(), "", "WaterZone[]");
        }
        inline app::WaterZone__Array* create() {
            return il2cpp::create_object<app::WaterZone__Array>(get_class());
        }
    } // namespace WaterZone__Array
} // namespace app::classes::types
