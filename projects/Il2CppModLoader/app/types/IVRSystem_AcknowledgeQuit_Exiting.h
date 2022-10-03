#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_AcknowledgeQuit_Exiting {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_AcknowledgeQuit_Exiting__Class** type_info;
        inline app::IVRSystem_AcknowledgeQuit_Exiting__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_AcknowledgeQuit_Exiting__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_AcknowledgeQuit_Exiting");
        }
        inline app::IVRSystem_AcknowledgeQuit_Exiting* create() {
            return il2cpp::create_object<app::IVRSystem_AcknowledgeQuit_Exiting>(get_class());
        }
    } // namespace IVRSystem_AcknowledgeQuit_Exiting
} // namespace app::classes::types
