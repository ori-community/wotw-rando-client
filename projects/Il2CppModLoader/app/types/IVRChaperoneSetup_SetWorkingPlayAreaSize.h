#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingPlayAreaSize {
        inline app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class** type_info = (app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class**)(modloader::win::memory::resolve_rva(0x04765F80));
        inline app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingPlayAreaSize");
        }
        inline app::IVRChaperoneSetup_SetWorkingPlayAreaSize* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingPlayAreaSize>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingPlayAreaSize
} // namespace app::classes::types
