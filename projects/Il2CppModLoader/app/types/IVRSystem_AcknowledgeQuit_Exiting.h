#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_AcknowledgeQuit_Exiting {
        inline app::IVRSystem_AcknowledgeQuit_Exiting__Class** type_info = (app::IVRSystem_AcknowledgeQuit_Exiting__Class**)(modloader::win::memory::resolve_rva(0x0478CE88));
        inline app::IVRSystem_AcknowledgeQuit_Exiting__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_AcknowledgeQuit_Exiting__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_AcknowledgeQuit_Exiting");
        }
        inline app::IVRSystem_AcknowledgeQuit_Exiting* create() {
            return il2cpp::create_object<app::IVRSystem_AcknowledgeQuit_Exiting>(get_class());
        }
    } // namespace IVRSystem_AcknowledgeQuit_Exiting
} // namespace app::classes::types
