#pragma once
#include <Modloader/app/structs/IVRApplications_GetCurrentSceneProcessId.h>
#include <Modloader/app/structs/IVRApplications_GetCurrentSceneProcessId__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetCurrentSceneProcessId {
        inline app::IVRApplications_GetCurrentSceneProcessId__Class** type_info() {
            static app::IVRApplications_GetCurrentSceneProcessId__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetCurrentSceneProcessId__Class**)(modloader::win::memory::resolve_rva(0x0476BBF8));
            }
            return cache;
        }
        inline app::IVRApplications_GetCurrentSceneProcessId__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetCurrentSceneProcessId__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetCurrentSceneProcessId");
        }
        inline app::IVRApplications_GetCurrentSceneProcessId* create() {
            return il2cpp::create_object<app::IVRApplications_GetCurrentSceneProcessId>(get_class());
        }
    } // namespace IVRApplications_GetCurrentSceneProcessId
} // namespace app::classes::types
