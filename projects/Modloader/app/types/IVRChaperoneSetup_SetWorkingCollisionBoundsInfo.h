#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_SetWorkingCollisionBoundsInfo.h>
#include <Modloader/app/structs/IVRChaperoneSetup_SetWorkingCollisionBoundsInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingCollisionBoundsInfo {
        inline app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo__Class** type_info() {
            static app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x04777C10));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingCollisionBoundsInfo");
        }
        inline app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingCollisionBoundsInfo
} // namespace app::classes::types
