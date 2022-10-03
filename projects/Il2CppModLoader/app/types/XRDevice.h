#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XRDevice {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XRDevice__Class** type_info;
        inline app::XRDevice__Class* get_class() {
            return il2cpp::get_class<app::XRDevice__Class>(type_info, "UnityEngine.XR", "XRDevice");
        }
        inline app::XRDevice* create() {
            return il2cpp::create_object<app::XRDevice>(get_class());
        }
    } // namespace XRDevice
} // namespace app::classes::types
