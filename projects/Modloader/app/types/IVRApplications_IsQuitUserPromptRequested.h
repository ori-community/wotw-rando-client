#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_IsQuitUserPromptRequested {
        inline app::IVRApplications_IsQuitUserPromptRequested__Class** type_info = (app::IVRApplications_IsQuitUserPromptRequested__Class**)(modloader::win::memory::resolve_rva(0x04711348));
        inline app::IVRApplications_IsQuitUserPromptRequested__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_IsQuitUserPromptRequested__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_IsQuitUserPromptRequested");
        }
        inline app::IVRApplications_IsQuitUserPromptRequested* create() {
            return il2cpp::create_object<app::IVRApplications_IsQuitUserPromptRequested>(get_class());
        }
    } // namespace IVRApplications_IsQuitUserPromptRequested
} // namespace app::classes::types
