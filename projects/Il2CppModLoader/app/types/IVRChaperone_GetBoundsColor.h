#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_GetBoundsColor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperone_GetBoundsColor__Class** type_info;
        inline app::IVRChaperone_GetBoundsColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_GetBoundsColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_GetBoundsColor");
        }
        inline app::IVRChaperone_GetBoundsColor* create() {
            return il2cpp::create_object<app::IVRChaperone_GetBoundsColor>(get_class());
        }
    } // namespace IVRChaperone_GetBoundsColor
} // namespace app::classes::types
