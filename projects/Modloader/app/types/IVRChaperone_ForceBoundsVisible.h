#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRChaperone_ForceBoundsVisible__Class.h>
#include <Modloader/app/structs/IVRChaperone_ForceBoundsVisible.h>

namespace app::classes::types {
    namespace IVRChaperone_ForceBoundsVisible {
        inline app::IVRChaperone_ForceBoundsVisible__Class** type_info = (app::IVRChaperone_ForceBoundsVisible__Class**)(modloader::win::memory::resolve_rva(0x0470FF88));
        inline app::IVRChaperone_ForceBoundsVisible__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_ForceBoundsVisible__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_ForceBoundsVisible");
        }
        inline app::IVRChaperone_ForceBoundsVisible* create() {
            return il2cpp::create_object<app::IVRChaperone_ForceBoundsVisible>(get_class());
        }
    } // namespace IVRChaperone_ForceBoundsVisible
} // namespace app::classes::types
