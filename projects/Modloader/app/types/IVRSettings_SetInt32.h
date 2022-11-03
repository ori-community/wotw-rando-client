#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSettings_SetInt32 {
        inline app::IVRSettings_SetInt32__Class** type_info = (app::IVRSettings_SetInt32__Class**)(modloader::win::memory::resolve_rva(0x04780420));
        inline app::IVRSettings_SetInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_SetInt32__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_SetInt32");
        }
        inline app::IVRSettings_SetInt32* create() {
            return il2cpp::create_object<app::IVRSettings_SetInt32>(get_class());
        }
    } // namespace IVRSettings_SetInt32
} // namespace app::classes::types
