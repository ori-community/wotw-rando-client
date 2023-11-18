#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_SetWorkingPlayAreaSize.h>
#include <Modloader/app/structs/IVRChaperoneSetup_SetWorkingPlayAreaSize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingPlayAreaSize {
        inline app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class** type_info() {
            static app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class**)(modloader::win::memory::resolve_rva(0x04765F80));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingPlayAreaSize");
        }
        inline app::IVRChaperoneSetup_SetWorkingPlayAreaSize* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingPlayAreaSize>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingPlayAreaSize
} // namespace app::classes::types
