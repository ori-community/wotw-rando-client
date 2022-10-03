#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SphericalWaterZone {
        namespace {
            app::SphericalWaterZone__Class* type_info_ref = nullptr;
        }
        app::SphericalWaterZone__Class** type_info = &type_info_ref;
        inline app::SphericalWaterZone__Class* get_class() {
            return il2cpp::get_class<app::SphericalWaterZone__Class>(type_info, "", "SphericalWaterZone");
        }
        inline app::SphericalWaterZone* create() {
            return il2cpp::create_object<app::SphericalWaterZone>(get_class());
        }
    } // namespace SphericalWaterZone
} // namespace app::classes::types
