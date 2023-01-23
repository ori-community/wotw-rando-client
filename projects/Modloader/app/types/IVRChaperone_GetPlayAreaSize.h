#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRChaperone_GetPlayAreaSize__Class.h>
#include <Modloader/app/structs/IVRChaperone_GetPlayAreaSize.h>

namespace app::classes::types {
    namespace IVRChaperone_GetPlayAreaSize {
        inline app::IVRChaperone_GetPlayAreaSize__Class** type_info = (app::IVRChaperone_GetPlayAreaSize__Class**)(modloader::win::memory::resolve_rva(0x047842F0));
        inline app::IVRChaperone_GetPlayAreaSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_GetPlayAreaSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_GetPlayAreaSize");
        }
        inline app::IVRChaperone_GetPlayAreaSize* create() {
            return il2cpp::create_object<app::IVRChaperone_GetPlayAreaSize>(get_class());
        }
    } // namespace IVRChaperone_GetPlayAreaSize
} // namespace app::classes::types
