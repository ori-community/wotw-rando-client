#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_SetSceneColor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperone_SetSceneColor__Class** type_info;
        inline app::IVRChaperone_SetSceneColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_SetSceneColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_SetSceneColor");
        }
        inline app::IVRChaperone_SetSceneColor* create() {
            return il2cpp::create_object<app::IVRChaperone_SetSceneColor>(get_class());
        }
    } // namespace IVRChaperone_SetSceneColor
} // namespace app::classes::types
