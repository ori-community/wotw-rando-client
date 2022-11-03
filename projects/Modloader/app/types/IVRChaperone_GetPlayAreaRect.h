#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperone_GetPlayAreaRect {
        inline app::IVRChaperone_GetPlayAreaRect__Class** type_info = (app::IVRChaperone_GetPlayAreaRect__Class**)(modloader::win::memory::resolve_rva(0x047847E0));
        inline app::IVRChaperone_GetPlayAreaRect__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_GetPlayAreaRect__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_GetPlayAreaRect");
        }
        inline app::IVRChaperone_GetPlayAreaRect* create() {
            return il2cpp::create_object<app::IVRChaperone_GetPlayAreaRect>(get_class());
        }
    } // namespace IVRChaperone_GetPlayAreaRect
} // namespace app::classes::types
