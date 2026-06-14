#pragma once
#include <Modloader/app/structs/IVRSystem_AcknowledgeQuit_Exiting.h>
#include <Modloader/app/structs/IVRSystem_AcknowledgeQuit_Exiting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_AcknowledgeQuit_Exiting {
        inline app::IVRSystem_AcknowledgeQuit_Exiting__Class** type_info() {
            static app::IVRSystem_AcknowledgeQuit_Exiting__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_AcknowledgeQuit_Exiting__Class**)(modloader::win::memory::resolve_rva(0x0478CE88));
            }
            return cache;
        }
        inline app::IVRSystem_AcknowledgeQuit_Exiting__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_AcknowledgeQuit_Exiting__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_AcknowledgeQuit_Exiting");
        }
        inline app::IVRSystem_AcknowledgeQuit_Exiting* create() {
            return il2cpp::create_object<app::IVRSystem_AcknowledgeQuit_Exiting>(get_class());
        }
    } // namespace IVRSystem_AcknowledgeQuit_Exiting
} // namespace app::classes::types
