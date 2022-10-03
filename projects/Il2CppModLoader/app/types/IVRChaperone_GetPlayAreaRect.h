#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_GetPlayAreaRect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperone_GetPlayAreaRect__Class** type_info;
        inline app::IVRChaperone_GetPlayAreaRect__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_GetPlayAreaRect__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_GetPlayAreaRect");
        }
        inline app::IVRChaperone_GetPlayAreaRect* create() {
            return il2cpp::create_object<app::IVRChaperone_GetPlayAreaRect>(get_class());
        }
    } // namespace IVRChaperone_GetPlayAreaRect
} // namespace app::classes::types
