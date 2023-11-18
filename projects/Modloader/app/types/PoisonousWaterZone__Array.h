#pragma once
#include <Modloader/app/structs/PoisonousWaterZone__Array.h>
#include <Modloader/app/structs/PoisonousWaterZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterZone__Array {
        inline app::PoisonousWaterZone__Array__Class** type_info() {
            static app::PoisonousWaterZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoisonousWaterZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoisonousWaterZone__Array__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterZone__Array__Class>(type_info(), "", "PoisonousWaterZone[]");
        }
        inline app::PoisonousWaterZone__Array* create() {
            return il2cpp::create_object<app::PoisonousWaterZone__Array>(get_class());
        }
    } // namespace PoisonousWaterZone__Array
} // namespace app::classes::types
