#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingCollisionBoundsInfo.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingCollisionBoundsInfo {
        inline app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class** type_info() {
            static app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x04787E18));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingCollisionBoundsInfo");
        }
        inline app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingCollisionBoundsInfo
} // namespace app::classes::types
