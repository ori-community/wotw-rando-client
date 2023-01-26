#pragma once
#include <Modloader/app/structs/WaterCurrentZone.h>
#include <Modloader/app/structs/WaterCurrentZone__Array.h>
#include <Modloader/app/structs/WaterCurrentZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterCurrentZone {
        inline app::WaterCurrentZone__Class** type_info() {
            static app::WaterCurrentZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterCurrentZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterCurrentZone__Class* get_class() {
            return il2cpp::get_class<app::WaterCurrentZone__Class>(type_info(), "", "WaterCurrentZone");
        }
        inline app::WaterCurrentZone* create() {
            return il2cpp::create_object<app::WaterCurrentZone>(get_class());
        }
        inline app::WaterCurrentZone__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterCurrentZone__Array>(get_class(), size);
        }
        inline app::WaterCurrentZone__Array* create_array(const std::vector<app::WaterCurrentZone*>& items) {
            return il2cpp::array_new<app::WaterCurrentZone__Array>(get_class(), items);
        }
    } // namespace WaterCurrentZone
} // namespace app::classes::types
