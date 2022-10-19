#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_AcknowledgeQuit_UserPrompt {
        inline app::IVRSystem_AcknowledgeQuit_UserPrompt__Class** type_info = (app::IVRSystem_AcknowledgeQuit_UserPrompt__Class**)(modloader::win::memory::resolve_rva(0x0473E618));
        inline app::IVRSystem_AcknowledgeQuit_UserPrompt__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_AcknowledgeQuit_UserPrompt__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_AcknowledgeQuit_UserPrompt");
        }
        inline app::IVRSystem_AcknowledgeQuit_UserPrompt* create() {
            return il2cpp::create_object<app::IVRSystem_AcknowledgeQuit_UserPrompt>(get_class());
        }
    } // namespace IVRSystem_AcknowledgeQuit_UserPrompt
} // namespace app::classes::types
