#pragma once
#include <Modloader/app/structs/PoisonousWaterDrip.h>
#include <Modloader/app/structs/PoisonousWaterDrip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterDrip {
        inline app::PoisonousWaterDrip__Class** type_info() {
            static app::PoisonousWaterDrip__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoisonousWaterDrip__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoisonousWaterDrip__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterDrip__Class>(type_info(), "", "PoisonousWaterDrip");
        }
        inline app::PoisonousWaterDrip* create() {
            return il2cpp::create_object<app::PoisonousWaterDrip>(get_class());
        }
    } // namespace PoisonousWaterDrip
} // namespace app::classes::types
