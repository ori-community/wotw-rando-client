#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderInteractionBehaviour_InteractionStates__Enum__Class.h>
#include <Modloader/app/structs/SpiderInteractionBehaviour_InteractionStates__Enum.h>

namespace app::classes::types {
    namespace SpiderInteractionBehaviour_InteractionStates__Enum {
        inline app::SpiderInteractionBehaviour_InteractionStates__Enum__Class** type_info = (app::SpiderInteractionBehaviour_InteractionStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x04779E30));
        inline app::SpiderInteractionBehaviour_InteractionStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderInteractionBehaviour_InteractionStates__Enum__Class>(type_info, "", "SpiderInteractionBehaviour", "InteractionStates");
        }
        inline app::SpiderInteractionBehaviour_InteractionStates__Enum* create() {
            return il2cpp::create_object<app::SpiderInteractionBehaviour_InteractionStates__Enum>(get_class());
        }
    } // namespace SpiderInteractionBehaviour_InteractionStates__Enum
} // namespace app::classes::types
