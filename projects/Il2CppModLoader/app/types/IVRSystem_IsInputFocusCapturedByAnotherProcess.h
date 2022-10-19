#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_IsInputFocusCapturedByAnotherProcess {
        inline app::IVRSystem_IsInputFocusCapturedByAnotherProcess__Class** type_info = (app::IVRSystem_IsInputFocusCapturedByAnotherProcess__Class**)(modloader::win::memory::resolve_rva(0x0471CA50));
        inline app::IVRSystem_IsInputFocusCapturedByAnotherProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_IsInputFocusCapturedByAnotherProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_IsInputFocusCapturedByAnotherProcess");
        }
        inline app::IVRSystem_IsInputFocusCapturedByAnotherProcess* create() {
            return il2cpp::create_object<app::IVRSystem_IsInputFocusCapturedByAnotherProcess>(get_class());
        }
    } // namespace IVRSystem_IsInputFocusCapturedByAnotherProcess
} // namespace app::classes::types
