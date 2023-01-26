#pragma once
#include <Modloader/app/structs/BabyWaterWormNest.h>
#include <Modloader/app/structs/BabyWaterWormNest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabyWaterWormNest {
        inline app::BabyWaterWormNest__Class** type_info() {
            static app::BabyWaterWormNest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabyWaterWormNest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabyWaterWormNest__Class* get_class() {
            return il2cpp::get_class<app::BabyWaterWormNest__Class>(type_info(), "", "BabyWaterWormNest");
        }
        inline app::BabyWaterWormNest* create() {
            return il2cpp::create_object<app::BabyWaterWormNest>(get_class());
        }
    } // namespace BabyWaterWormNest
} // namespace app::classes::types
