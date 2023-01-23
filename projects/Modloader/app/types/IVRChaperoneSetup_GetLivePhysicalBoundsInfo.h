#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetLivePhysicalBoundsInfo.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLivePhysicalBoundsInfo {
        inline app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class** type_info = (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x0470C4A0));
        inline app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLivePhysicalBoundsInfo");
        }
        inline app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLivePhysicalBoundsInfo
} // namespace app::classes::types
