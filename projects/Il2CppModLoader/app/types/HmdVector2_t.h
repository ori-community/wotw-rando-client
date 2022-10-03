#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HmdVector2_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HmdVector2_t__Class** type_info;
        inline app::HmdVector2_t__Class* get_class() {
            return il2cpp::get_class<app::HmdVector2_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdVector2_t");
        }
        inline app::HmdVector2_t* create() {
            return il2cpp::create_object<app::HmdVector2_t>(get_class());
        }
        inline app::HmdVector2_t__Boxed* box(app::HmdVector2_t value) {
            return il2cpp::box_value<app::HmdVector2_t__Boxed>(get_class(), value);
        }
    } // namespace HmdVector2_t
} // namespace app::classes::types
