#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_PollNextEventWithPose {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_PollNextEventWithPose__Class** type_info;
        inline app::IVRSystem_PollNextEventWithPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_PollNextEventWithPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_PollNextEventWithPose");
        }
        inline app::IVRSystem_PollNextEventWithPose* create() {
            return il2cpp::create_object<app::IVRSystem_PollNextEventWithPose>(get_class());
        }
    } // namespace IVRSystem_PollNextEventWithPose
} // namespace app::classes::types
