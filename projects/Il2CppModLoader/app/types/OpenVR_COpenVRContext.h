#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenVR_COpenVRContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpenVR_COpenVRContext__Class** type_info;
        inline app::OpenVR_COpenVRContext__Class* get_class() {
            return il2cpp::get_nested_class<app::OpenVR_COpenVRContext__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "OpenVR", "COpenVRContext");
        }
        inline app::OpenVR_COpenVRContext* create() {
            return il2cpp::create_object<app::OpenVR_COpenVRContext>(get_class());
        }
    } // namespace OpenVR_COpenVRContext
} // namespace app::classes::types
