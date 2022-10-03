#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_IsInputFocusCapturedByAnotherProcess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_IsInputFocusCapturedByAnotherProcess__Class** type_info;
        inline app::IVRSystem_IsInputFocusCapturedByAnotherProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_IsInputFocusCapturedByAnotherProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_IsInputFocusCapturedByAnotherProcess");
        }
        inline app::IVRSystem_IsInputFocusCapturedByAnotherProcess* create() {
            return il2cpp::create_object<app::IVRSystem_IsInputFocusCapturedByAnotherProcess>(get_class());
        }
    } // namespace IVRSystem_IsInputFocusCapturedByAnotherProcess
} // namespace app::classes::types
