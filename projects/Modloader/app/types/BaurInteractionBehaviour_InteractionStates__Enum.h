#pragma once
#include <Modloader/app/structs/BaurInteractionBehaviour_InteractionStates__Enum.h>
#include <Modloader/app/structs/BaurInteractionBehaviour_InteractionStates__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaurInteractionBehaviour_InteractionStates__Enum {
        inline app::BaurInteractionBehaviour_InteractionStates__Enum__Class** type_info() {
            static app::BaurInteractionBehaviour_InteractionStates__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaurInteractionBehaviour_InteractionStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474AE00));
            }
            return cache;
        }
        inline app::BaurInteractionBehaviour_InteractionStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaurInteractionBehaviour_InteractionStates__Enum__Class>(type_info(), "", "BaurInteractionBehaviour", "InteractionStates");
        }
        inline app::BaurInteractionBehaviour_InteractionStates__Enum* create() {
            return il2cpp::create_object<app::BaurInteractionBehaviour_InteractionStates__Enum>(get_class());
        }
    } // namespace BaurInteractionBehaviour_InteractionStates__Enum
} // namespace app::classes::types
