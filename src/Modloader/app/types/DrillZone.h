#pragma once
#include <Modloader/app/structs/DrillZone.h>
#include <Modloader/app/structs/DrillZone__Array.h>
#include <Modloader/app/structs/DrillZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrillZone {
        inline app::DrillZone__Class** type_info() {
            static app::DrillZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrillZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrillZone__Class* get_class() {
            return il2cpp::get_class<app::DrillZone__Class>(type_info(), "", "DrillZone");
        }
        inline app::DrillZone* create() {
            return il2cpp::create_object<app::DrillZone>(get_class());
        }
        inline app::DrillZone__Array* create_array(int size) {
            return il2cpp::array_new<app::DrillZone__Array>(get_class(), size);
        }
        inline app::DrillZone__Array* create_array(const std::vector<app::DrillZone*>& items) {
            return il2cpp::array_new<app::DrillZone__Array>(get_class(), items);
        }
    } // namespace DrillZone
} // namespace app::classes::types
