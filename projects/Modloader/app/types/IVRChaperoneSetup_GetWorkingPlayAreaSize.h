#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingPlayAreaSize__Class.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingPlayAreaSize.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingPlayAreaSize {
        inline app::IVRChaperoneSetup_GetWorkingPlayAreaSize__Class** type_info = (app::IVRChaperoneSetup_GetWorkingPlayAreaSize__Class**)(modloader::win::memory::resolve_rva(0x04777D68));
        inline app::IVRChaperoneSetup_GetWorkingPlayAreaSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingPlayAreaSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingPlayAreaSize");
        }
        inline app::IVRChaperoneSetup_GetWorkingPlayAreaSize* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingPlayAreaSize>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingPlayAreaSize
} // namespace app::classes::types
