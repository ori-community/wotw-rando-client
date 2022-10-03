#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRInteractionController {
        namespace {
            app::VRInteractionController__Class* type_info_ref = nullptr;
        }
        app::VRInteractionController__Class** type_info = &type_info_ref;
        inline app::VRInteractionController__Class* get_class() {
            return il2cpp::get_class<app::VRInteractionController__Class>(type_info, "RootMotion.Demos", "VRInteractionController");
        }
        inline app::VRInteractionController* create() {
            return il2cpp::create_object<app::VRInteractionController>(get_class());
        }
    } // namespace VRInteractionController
} // namespace app::classes::types
