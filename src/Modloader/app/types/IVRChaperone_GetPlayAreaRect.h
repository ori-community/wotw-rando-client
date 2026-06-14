#pragma once
#include <Modloader/app/structs/IVRChaperone_GetPlayAreaRect.h>
#include <Modloader/app/structs/IVRChaperone_GetPlayAreaRect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_GetPlayAreaRect {
        inline app::IVRChaperone_GetPlayAreaRect__Class** type_info() {
            static app::IVRChaperone_GetPlayAreaRect__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperone_GetPlayAreaRect__Class**)(modloader::win::memory::resolve_rva(0x047847E0));
            }
            return cache;
        }
        inline app::IVRChaperone_GetPlayAreaRect__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_GetPlayAreaRect__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_GetPlayAreaRect");
        }
        inline app::IVRChaperone_GetPlayAreaRect* create() {
            return il2cpp::create_object<app::IVRChaperone_GetPlayAreaRect>(get_class());
        }
    } // namespace IVRChaperone_GetPlayAreaRect
} // namespace app::classes::types
