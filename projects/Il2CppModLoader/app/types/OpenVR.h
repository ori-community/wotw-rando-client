#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenVR {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpenVR__Class** type_info;
        inline app::OpenVR__Class* get_class() {
            return il2cpp::get_class<app::OpenVR__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "OpenVR");
        }
        inline app::OpenVR* create() {
            return il2cpp::create_object<app::OpenVR>(get_class());
        }
    } // namespace OpenVR
} // namespace app::classes::types
