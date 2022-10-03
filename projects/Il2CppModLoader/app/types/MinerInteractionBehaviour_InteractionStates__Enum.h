#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerInteractionBehaviour_InteractionStates__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MinerInteractionBehaviour_InteractionStates__Enum__Class** type_info;
        inline app::MinerInteractionBehaviour_InteractionStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerInteractionBehaviour_InteractionStates__Enum__Class>(type_info, "", "MinerInteractionBehaviour", "InteractionStates");
        }
        inline app::MinerInteractionBehaviour_InteractionStates__Enum* create() {
            return il2cpp::create_object<app::MinerInteractionBehaviour_InteractionStates__Enum>(get_class());
        }
    } // namespace MinerInteractionBehaviour_InteractionStates__Enum
} // namespace app::classes::types
