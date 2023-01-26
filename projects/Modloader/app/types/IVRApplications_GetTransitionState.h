#pragma once
#include <Modloader/app/structs/IVRApplications_GetTransitionState.h>
#include <Modloader/app/structs/IVRApplications_GetTransitionState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetTransitionState {
        inline app::IVRApplications_GetTransitionState__Class** type_info() {
            static app::IVRApplications_GetTransitionState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetTransitionState__Class**)(modloader::win::memory::resolve_rva(0x04774310));
            }
            return cache;
        }
        inline app::IVRApplications_GetTransitionState__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetTransitionState__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetTransitionState");
        }
        inline app::IVRApplications_GetTransitionState* create() {
            return il2cpp::create_object<app::IVRApplications_GetTransitionState>(get_class());
        }
    } // namespace IVRApplications_GetTransitionState
} // namespace app::classes::types
