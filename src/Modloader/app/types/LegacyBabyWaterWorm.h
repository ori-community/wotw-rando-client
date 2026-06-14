#pragma once
#include <Modloader/app/structs/LegacyBabyWaterWorm.h>
#include <Modloader/app/structs/LegacyBabyWaterWorm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyBabyWaterWorm {
        inline app::LegacyBabyWaterWorm__Class** type_info() {
            static app::LegacyBabyWaterWorm__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyBabyWaterWorm__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyBabyWaterWorm__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabyWaterWorm__Class>(type_info(), "", "LegacyBabyWaterWorm");
        }
        inline app::LegacyBabyWaterWorm* create() {
            return il2cpp::create_object<app::LegacyBabyWaterWorm>(get_class());
        }
    } // namespace LegacyBabyWaterWorm
} // namespace app::classes::types
