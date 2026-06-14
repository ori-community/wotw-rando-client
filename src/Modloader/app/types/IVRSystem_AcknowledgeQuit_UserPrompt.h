#pragma once
#include <Modloader/app/structs/IVRSystem_AcknowledgeQuit_UserPrompt.h>
#include <Modloader/app/structs/IVRSystem_AcknowledgeQuit_UserPrompt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_AcknowledgeQuit_UserPrompt {
        inline app::IVRSystem_AcknowledgeQuit_UserPrompt__Class** type_info() {
            static app::IVRSystem_AcknowledgeQuit_UserPrompt__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_AcknowledgeQuit_UserPrompt__Class**)(modloader::win::memory::resolve_rva(0x0473E618));
            }
            return cache;
        }
        inline app::IVRSystem_AcknowledgeQuit_UserPrompt__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_AcknowledgeQuit_UserPrompt__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_AcknowledgeQuit_UserPrompt");
        }
        inline app::IVRSystem_AcknowledgeQuit_UserPrompt* create() {
            return il2cpp::create_object<app::IVRSystem_AcknowledgeQuit_UserPrompt>(get_class());
        }
    } // namespace IVRSystem_AcknowledgeQuit_UserPrompt
} // namespace app::classes::types
