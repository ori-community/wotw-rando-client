#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabyWaterWormNest {
        namespace {
            app::BabyWaterWormNest__Class* type_info_ref = nullptr;
        }
        app::BabyWaterWormNest__Class** type_info = &type_info_ref;
        inline app::BabyWaterWormNest__Class* get_class() {
            return il2cpp::get_class<app::BabyWaterWormNest__Class>(type_info, "", "BabyWaterWormNest");
        }
        inline app::BabyWaterWormNest* create() {
            return il2cpp::create_object<app::BabyWaterWormNest>(get_class());
        }
    } // namespace BabyWaterWormNest
} // namespace app::classes::types
