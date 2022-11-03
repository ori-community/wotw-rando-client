#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo {
        inline app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo__Class** type_info = (app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x047569A0));
        inline app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingPhysicalBoundsInfo");
        }
        inline app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo
} // namespace app::classes::types
