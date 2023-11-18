#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingPlayAreaRect.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingPlayAreaRect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingPlayAreaRect {
        inline app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class** type_info() {
            static app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class**)(modloader::win::memory::resolve_rva(0x04762048));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingPlayAreaRect");
        }
        inline app::IVRChaperoneSetup_GetWorkingPlayAreaRect* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingPlayAreaRect>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingPlayAreaRect
} // namespace app::classes::types
