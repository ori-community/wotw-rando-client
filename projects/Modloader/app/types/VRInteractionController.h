#pragma once
#include <Modloader/app/structs/VRInteractionController.h>
#include <Modloader/app/structs/VRInteractionController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRInteractionController {
        inline app::VRInteractionController__Class** type_info() {
            static app::VRInteractionController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VRInteractionController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VRInteractionController__Class* get_class() {
            return il2cpp::get_class<app::VRInteractionController__Class>(type_info(), "RootMotion.Demos", "VRInteractionController");
        }
        inline app::VRInteractionController* create() {
            return il2cpp::create_object<app::VRInteractionController>(get_class());
        }
    } // namespace VRInteractionController
} // namespace app::classes::types
