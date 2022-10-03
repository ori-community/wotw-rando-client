#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HmdColor_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HmdColor_t__Class** type_info;
        inline app::HmdColor_t__Class* get_class() {
            return il2cpp::get_class<app::HmdColor_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdColor_t");
        }
        inline app::HmdColor_t* create() {
            return il2cpp::create_object<app::HmdColor_t>(get_class());
        }
        inline app::HmdColor_t__Boxed* box(app::HmdColor_t value) {
            return il2cpp::box_value<app::HmdColor_t__Boxed>(get_class(), value);
        }
    } // namespace HmdColor_t
} // namespace app::classes::types
