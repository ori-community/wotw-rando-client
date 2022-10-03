#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionSystem_InteractionDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionSystem_InteractionDelegate__Class** type_info;
        inline app::InteractionSystem_InteractionDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionSystem_InteractionDelegate__Class>(type_info, "RootMotion.FinalIK", "InteractionSystem", "InteractionDelegate");
        }
        inline app::InteractionSystem_InteractionDelegate* create() {
            return il2cpp::create_object<app::InteractionSystem_InteractionDelegate>(get_class());
        }
    } // namespace InteractionSystem_InteractionDelegate
} // namespace app::classes::types
