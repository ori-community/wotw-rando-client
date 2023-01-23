#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinerInteractionBehaviour_InteractionStates__Enum__Class.h>
#include <Modloader/app/structs/MinerInteractionBehaviour_InteractionStates__Enum.h>

namespace app::classes::types {
    namespace MinerInteractionBehaviour_InteractionStates__Enum {
        inline app::MinerInteractionBehaviour_InteractionStates__Enum__Class** type_info = (app::MinerInteractionBehaviour_InteractionStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478E718));
        inline app::MinerInteractionBehaviour_InteractionStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerInteractionBehaviour_InteractionStates__Enum__Class>(type_info, "", "MinerInteractionBehaviour", "InteractionStates");
        }
        inline app::MinerInteractionBehaviour_InteractionStates__Enum* create() {
            return il2cpp::create_object<app::MinerInteractionBehaviour_InteractionStates__Enum>(get_class());
        }
    } // namespace MinerInteractionBehaviour_InteractionStates__Enum
} // namespace app::classes::types
