#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperone_SetSceneColor {
        inline app::IVRChaperone_SetSceneColor__Class** type_info = (app::IVRChaperone_SetSceneColor__Class**)(modloader::win::memory::resolve_rva(0x04769C98));
        inline app::IVRChaperone_SetSceneColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_SetSceneColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_SetSceneColor");
        }
        inline app::IVRChaperone_SetSceneColor* create() {
            return il2cpp::create_object<app::IVRChaperone_SetSceneColor>(get_class());
        }
    } // namespace IVRChaperone_SetSceneColor
} // namespace app::classes::types
