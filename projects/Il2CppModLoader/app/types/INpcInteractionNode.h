#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace INpcInteractionNode {
        inline app::INpcInteractionNode__Class** type_info = (app::INpcInteractionNode__Class**)(modloader::win::memory::resolve_rva(0x04722AF0));
        inline app::INpcInteractionNode__Class* get_class() {
            return il2cpp::get_class<app::INpcInteractionNode__Class>(type_info, "", "INpcInteractionNode");
        }
    } // namespace INpcInteractionNode
} // namespace app::classes::types
