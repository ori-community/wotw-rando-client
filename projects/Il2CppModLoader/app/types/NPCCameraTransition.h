#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NPCCameraTransition {
        inline app::NPCCameraTransition__Class** type_info = (app::NPCCameraTransition__Class**)(modloader::win::memory::resolve_rva(0x04707FC0));
        inline app::NPCCameraTransition__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraTransition__Class>(type_info, "Moon", "NPCCameraTransition");
        }
        inline app::NPCCameraTransition* create() {
            return il2cpp::create_object<app::NPCCameraTransition>(get_class());
        }
    } // namespace NPCCameraTransition
} // namespace app::classes::types
