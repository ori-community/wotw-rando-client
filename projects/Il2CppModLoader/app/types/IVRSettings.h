#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings__Class** type_info;
        inline app::IVRSettings__Class* get_class() {
            return il2cpp::get_class<app::IVRSettings__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings");
        }
        inline app::IVRSettings* create() {
            return il2cpp::create_object<app::IVRSettings>(get_class());
        }
        inline app::IVRSettings__Boxed* box(app::IVRSettings value) {
            return il2cpp::box_value<app::IVRSettings__Boxed>(get_class(), value);
        }
    } // namespace IVRSettings
} // namespace app::classes::types
