#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRTextureBounds_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VRTextureBounds_t__Class** type_info;
        inline app::VRTextureBounds_t__Class* get_class() {
            return il2cpp::get_class<app::VRTextureBounds_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VRTextureBounds_t");
        }
        inline app::VRTextureBounds_t* create() {
            return il2cpp::create_object<app::VRTextureBounds_t>(get_class());
        }
        inline app::VRTextureBounds_t__Boxed* box(app::VRTextureBounds_t value) {
            return il2cpp::box_value<app::VRTextureBounds_t__Boxed>(get_class(), value);
        }
    } // namespace VRTextureBounds_t
} // namespace app::classes::types
