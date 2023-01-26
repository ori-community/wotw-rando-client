#pragma once
#include <Modloader/app/structs/IVRSystem_PollNextEventWithPose.h>
#include <Modloader/app/structs/IVRSystem_PollNextEventWithPose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_PollNextEventWithPose {
        inline app::IVRSystem_PollNextEventWithPose__Class** type_info() {
            static app::IVRSystem_PollNextEventWithPose__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_PollNextEventWithPose__Class**)(modloader::win::memory::resolve_rva(0x0473F728));
            }
            return cache;
        }
        inline app::IVRSystem_PollNextEventWithPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_PollNextEventWithPose__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_PollNextEventWithPose");
        }
        inline app::IVRSystem_PollNextEventWithPose* create() {
            return il2cpp::create_object<app::IVRSystem_PollNextEventWithPose>(get_class());
        }
    } // namespace IVRSystem_PollNextEventWithPose
} // namespace app::classes::types
