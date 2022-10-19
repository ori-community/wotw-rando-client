#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_RevertWorkingCopy {
        inline app::IVRChaperoneSetup_RevertWorkingCopy__Class** type_info = (app::IVRChaperoneSetup_RevertWorkingCopy__Class**)(modloader::win::memory::resolve_rva(0x047241A0));
        inline app::IVRChaperoneSetup_RevertWorkingCopy__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_RevertWorkingCopy__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_RevertWorkingCopy");
        }
        inline app::IVRChaperoneSetup_RevertWorkingCopy* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_RevertWorkingCopy>(get_class());
        }
    } // namespace IVRChaperoneSetup_RevertWorkingCopy
} // namespace app::classes::types
