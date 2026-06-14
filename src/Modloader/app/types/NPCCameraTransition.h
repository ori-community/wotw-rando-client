#pragma once
#include <Modloader/app/structs/NPCCameraTransition.h>
#include <Modloader/app/structs/NPCCameraTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCCameraTransition {
        inline app::NPCCameraTransition__Class** type_info() {
            static app::NPCCameraTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NPCCameraTransition__Class**)(modloader::win::memory::resolve_rva(0x04707FC0));
            }
            return cache;
        }
        inline app::NPCCameraTransition__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraTransition__Class>(type_info(), "Moon", "NPCCameraTransition");
        }
        inline app::NPCCameraTransition* create() {
            return il2cpp::create_object<app::NPCCameraTransition>(get_class());
        }
    } // namespace NPCCameraTransition
} // namespace app::classes::types
