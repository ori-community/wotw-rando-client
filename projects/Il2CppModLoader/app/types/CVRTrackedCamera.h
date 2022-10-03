#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRTrackedCamera {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRTrackedCamera__Class** type_info;
        inline app::CVRTrackedCamera__Class* get_class() {
            return il2cpp::get_class<app::CVRTrackedCamera__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRTrackedCamera");
        }
        inline app::CVRTrackedCamera* create() {
            return il2cpp::create_object<app::CVRTrackedCamera>(get_class());
        }
    } // namespace CVRTrackedCamera
} // namespace app::classes::types
