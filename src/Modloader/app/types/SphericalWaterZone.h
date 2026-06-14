#pragma once
#include <Modloader/app/structs/SphericalWaterZone.h>
#include <Modloader/app/structs/SphericalWaterZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SphericalWaterZone {
        inline app::SphericalWaterZone__Class** type_info() {
            static app::SphericalWaterZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SphericalWaterZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SphericalWaterZone__Class* get_class() {
            return il2cpp::get_class<app::SphericalWaterZone__Class>(type_info(), "", "SphericalWaterZone");
        }
        inline app::SphericalWaterZone* create() {
            return il2cpp::create_object<app::SphericalWaterZone>(get_class());
        }
    } // namespace SphericalWaterZone
} // namespace app::classes::types
