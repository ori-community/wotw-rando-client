#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem__Class** type_info;
        inline app::IVRSystem__Class* get_class() {
            return il2cpp::get_class<app::IVRSystem__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem");
        }
        inline app::IVRSystem* create() {
            return il2cpp::create_object<app::IVRSystem>(get_class());
        }
        inline app::IVRSystem__Boxed* box(app::IVRSystem value) {
            return il2cpp::box_value<app::IVRSystem__Boxed>(get_class(), value);
        }
    } // namespace IVRSystem
} // namespace app::classes::types
