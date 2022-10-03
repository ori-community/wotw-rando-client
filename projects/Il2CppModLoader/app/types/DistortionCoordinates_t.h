#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DistortionCoordinates_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DistortionCoordinates_t__Class** type_info;
        inline app::DistortionCoordinates_t__Class* get_class() {
            return il2cpp::get_class<app::DistortionCoordinates_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "DistortionCoordinates_t");
        }
        inline app::DistortionCoordinates_t* create() {
            return il2cpp::create_object<app::DistortionCoordinates_t>(get_class());
        }
        inline app::DistortionCoordinates_t__Boxed* box(app::DistortionCoordinates_t value) {
            return il2cpp::box_value<app::DistortionCoordinates_t__Boxed>(get_class(), value);
        }
    } // namespace DistortionCoordinates_t
} // namespace app::classes::types
