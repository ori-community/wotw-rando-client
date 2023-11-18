#pragma once
#include <Modloader/app/structs/VRInteractionUI.h>
#include <Modloader/app/structs/VRInteractionUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRInteractionUI {
        inline app::VRInteractionUI__Class** type_info() {
            static app::VRInteractionUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VRInteractionUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VRInteractionUI__Class* get_class() {
            return il2cpp::get_class<app::VRInteractionUI__Class>(type_info(), "RootMotion.Demos", "VRInteractionUI");
        }
        inline app::VRInteractionUI* create() {
            return il2cpp::create_object<app::VRInteractionUI>(get_class());
        }
    } // namespace VRInteractionUI
} // namespace app::classes::types
