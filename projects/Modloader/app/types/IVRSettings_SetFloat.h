#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSettings_SetFloat {
        inline app::IVRSettings_SetFloat__Class** type_info = (app::IVRSettings_SetFloat__Class**)(modloader::win::memory::resolve_rva(0x047716C0));
        inline app::IVRSettings_SetFloat__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_SetFloat__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_SetFloat");
        }
        inline app::IVRSettings_SetFloat* create() {
            return il2cpp::create_object<app::IVRSettings_SetFloat>(get_class());
        }
    } // namespace IVRSettings_SetFloat
} // namespace app::classes::types
