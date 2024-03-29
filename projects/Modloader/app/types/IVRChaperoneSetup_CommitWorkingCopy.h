#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_CommitWorkingCopy.h>
#include <Modloader/app/structs/IVRChaperoneSetup_CommitWorkingCopy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_CommitWorkingCopy {
        inline app::IVRChaperoneSetup_CommitWorkingCopy__Class** type_info() {
            static app::IVRChaperoneSetup_CommitWorkingCopy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_CommitWorkingCopy__Class**)(modloader::win::memory::resolve_rva(0x047332F8));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_CommitWorkingCopy__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_CommitWorkingCopy__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_CommitWorkingCopy");
        }
        inline app::IVRChaperoneSetup_CommitWorkingCopy* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_CommitWorkingCopy>(get_class());
        }
    } // namespace IVRChaperoneSetup_CommitWorkingCopy
} // namespace app::classes::types
