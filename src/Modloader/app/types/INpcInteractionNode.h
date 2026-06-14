#pragma once
#include <Modloader/app/structs/INpcInteractionNode.h>
#include <Modloader/app/structs/INpcInteractionNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INpcInteractionNode {
        inline app::INpcInteractionNode__Class** type_info() {
            static app::INpcInteractionNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INpcInteractionNode__Class**)(modloader::win::memory::resolve_rva(0x04722AF0));
            }
            return cache;
        }
        inline app::INpcInteractionNode__Class* get_class() {
            return il2cpp::get_class<app::INpcInteractionNode__Class>(type_info(), "", "INpcInteractionNode");
        }
    } // namespace INpcInteractionNode
} // namespace app::classes::types
