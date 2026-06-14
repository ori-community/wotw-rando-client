#pragma once
#include <Modloader/app/structs/IVRChaperone_AreBoundsVisible.h>
#include <Modloader/app/structs/IVRChaperone_AreBoundsVisible__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_AreBoundsVisible {
        inline app::IVRChaperone_AreBoundsVisible__Class** type_info() {
            static app::IVRChaperone_AreBoundsVisible__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperone_AreBoundsVisible__Class**)(modloader::win::memory::resolve_rva(0x0473F508));
            }
            return cache;
        }
        inline app::IVRChaperone_AreBoundsVisible__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_AreBoundsVisible__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_AreBoundsVisible");
        }
        inline app::IVRChaperone_AreBoundsVisible* create() {
            return il2cpp::create_object<app::IVRChaperone_AreBoundsVisible>(get_class());
        }
    } // namespace IVRChaperone_AreBoundsVisible
} // namespace app::classes::types
