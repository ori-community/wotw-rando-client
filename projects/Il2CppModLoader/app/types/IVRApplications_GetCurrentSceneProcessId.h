#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetCurrentSceneProcessId {
        inline app::IVRApplications_GetCurrentSceneProcessId__Class** type_info = (app::IVRApplications_GetCurrentSceneProcessId__Class**)(modloader::win::memory::resolve_rva(0x0476BBF8));
        inline app::IVRApplications_GetCurrentSceneProcessId__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetCurrentSceneProcessId__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetCurrentSceneProcessId");
        }
        inline app::IVRApplications_GetCurrentSceneProcessId* create() {
            return il2cpp::create_object<app::IVRApplications_GetCurrentSceneProcessId>(get_class());
        }
    } // namespace IVRApplications_GetCurrentSceneProcessId
} // namespace app::classes::types
