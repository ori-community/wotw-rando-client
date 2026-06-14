#pragma once
#include <Modloader/app/structs/WaterZone.h>
#include <Modloader/app/structs/WaterZone__Array.h>
#include <Modloader/app/structs/WaterZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterZone {
        inline app::WaterZone__Class** type_info() {
            static app::WaterZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterZone__Class* get_class() {
            return il2cpp::get_class<app::WaterZone__Class>(type_info(), "", "WaterZone");
        }
        inline app::WaterZone* create() {
            return il2cpp::create_object<app::WaterZone>(get_class());
        }
        inline app::WaterZone__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterZone__Array>(get_class(), size);
        }
        inline app::WaterZone__Array* create_array(const std::vector<app::WaterZone*>& items) {
            return il2cpp::array_new<app::WaterZone__Array>(get_class(), items);
        }
    } // namespace WaterZone
} // namespace app::classes::types
