#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_CommitWorkingCopy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_CommitWorkingCopy__Class** type_info;
        inline app::IVRChaperoneSetup_CommitWorkingCopy__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_CommitWorkingCopy__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_CommitWorkingCopy");
        }
        inline app::IVRChaperoneSetup_CommitWorkingCopy* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_CommitWorkingCopy>(get_class());
        }
    } // namespace IVRChaperoneSetup_CommitWorkingCopy
} // namespace app::classes::types
