#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetProjectionRaw {
        inline app::IVRSystem_GetProjectionRaw__Class** type_info = (app::IVRSystem_GetProjectionRaw__Class**)(modloader::win::memory::resolve_rva(0x04749650));
        inline app::IVRSystem_GetProjectionRaw__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetProjectionRaw__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetProjectionRaw");
        }
        inline app::IVRSystem_GetProjectionRaw* create() {
            return il2cpp::create_object<app::IVRSystem_GetProjectionRaw>(get_class());
        }
    } // namespace IVRSystem_GetProjectionRaw
} // namespace app::classes::types
