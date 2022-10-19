#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo {
        inline app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo__Class** type_info = (app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo__Class**)(modloader::win::memory::resolve_rva(0x04710CC0));
        inline app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingCollisionBoundsTagsInfo");
        }
        inline app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo
} // namespace app::classes::types
