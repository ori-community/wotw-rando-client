#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VRInteractionController__Class.h>
#include <Modloader/app/structs/VRInteractionController.h>

namespace app::classes::types {
    namespace VRInteractionController {
        namespace {
            inline app::VRInteractionController__Class* type_info_ref = nullptr;
        }
        inline app::VRInteractionController__Class** type_info = &type_info_ref;
        inline app::VRInteractionController__Class* get_class() {
            return il2cpp::get_class<app::VRInteractionController__Class>(type_info, "RootMotion.Demos", "VRInteractionController");
        }
        inline app::VRInteractionController* create() {
            return il2cpp::create_object<app::VRInteractionController>(get_class());
        }
    } // namespace VRInteractionController
} // namespace app::classes::types
