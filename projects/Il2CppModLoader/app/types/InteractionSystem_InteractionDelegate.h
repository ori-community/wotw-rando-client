#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionSystem_InteractionDelegate {
        inline app::InteractionSystem_InteractionDelegate__Class** type_info = (app::InteractionSystem_InteractionDelegate__Class**)(modloader::win::memory::resolve_rva(0x04796630));
        inline app::InteractionSystem_InteractionDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionSystem_InteractionDelegate__Class>(type_info, "RootMotion.FinalIK", "InteractionSystem", "InteractionDelegate");
        }
        inline app::InteractionSystem_InteractionDelegate* create() {
            return il2cpp::create_object<app::InteractionSystem_InteractionDelegate>(get_class());
        }
    } // namespace InteractionSystem_InteractionDelegate
} // namespace app::classes::types
