#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSettings_GetBool {
        inline app::IVRSettings_GetBool__Class** type_info = (app::IVRSettings_GetBool__Class**)(modloader::win::memory::resolve_rva(0x04762200));
        inline app::IVRSettings_GetBool__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetBool__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetBool");
        }
        inline app::IVRSettings_GetBool* create() {
            return il2cpp::create_object<app::IVRSettings_GetBool>(get_class());
        }
    } // namespace IVRSettings_GetBool
} // namespace app::classes::types
