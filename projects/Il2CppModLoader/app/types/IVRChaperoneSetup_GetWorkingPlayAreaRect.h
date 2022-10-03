#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingPlayAreaRect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class** type_info;
        inline app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingPlayAreaRect");
        }
        inline app::IVRChaperoneSetup_GetWorkingPlayAreaRect* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingPlayAreaRect>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingPlayAreaRect
} // namespace app::classes::types
