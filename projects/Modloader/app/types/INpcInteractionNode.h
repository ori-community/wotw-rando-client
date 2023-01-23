#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/INpcInteractionNode__Class.h>

namespace app::classes::types {
    namespace INpcInteractionNode {
        inline app::INpcInteractionNode__Class** type_info = (app::INpcInteractionNode__Class**)(modloader::win::memory::resolve_rva(0x04722AF0));
        inline app::INpcInteractionNode__Class* get_class() {
            return il2cpp::get_class<app::INpcInteractionNode__Class>(type_info, "", "INpcInteractionNode");
        }
    } // namespace INpcInteractionNode
} // namespace app::classes::types
