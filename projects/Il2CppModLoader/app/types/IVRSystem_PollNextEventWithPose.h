#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_PollNextEventWithPose {
        inline app::IVRSystem_PollNextEventWithPose__Class** type_info = (app::IVRSystem_PollNextEventWithPose__Class**)(modloader::win::memory::resolve_rva(0x0473F728));
        inline app::IVRSystem_PollNextEventWithPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_PollNextEventWithPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_PollNextEventWithPose");
        }
        inline app::IVRSystem_PollNextEventWithPose* create() {
            return il2cpp::create_object<app::IVRSystem_PollNextEventWithPose>(get_class());
        }
    } // namespace IVRSystem_PollNextEventWithPose
} // namespace app::classes::types
