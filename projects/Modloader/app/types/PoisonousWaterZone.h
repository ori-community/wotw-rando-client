#pragma once
#include <Modloader/app/structs/PoisonousWaterZone.h>
#include <Modloader/app/structs/PoisonousWaterZone__Array.h>
#include <Modloader/app/structs/PoisonousWaterZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterZone {
        inline app::PoisonousWaterZone__Class** type_info() {
            static app::PoisonousWaterZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoisonousWaterZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoisonousWaterZone__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterZone__Class>(type_info(), "", "PoisonousWaterZone");
        }
        inline app::PoisonousWaterZone* create() {
            return il2cpp::create_object<app::PoisonousWaterZone>(get_class());
        }
        inline app::PoisonousWaterZone__Array* create_array(int size) {
            return il2cpp::array_new<app::PoisonousWaterZone__Array>(get_class(), size);
        }
        inline app::PoisonousWaterZone__Array* create_array(const std::vector<app::PoisonousWaterZone*>& items) {
            return il2cpp::array_new<app::PoisonousWaterZone__Array>(get_class(), items);
        }
    } // namespace PoisonousWaterZone
} // namespace app::classes::types
