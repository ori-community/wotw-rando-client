#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InverterNode {
        inline app::InverterNode__Class** type_info = (app::InverterNode__Class**)(modloader::win::memory::resolve_rva(0x04783320));
        inline app::InverterNode__Class* get_class() {
            return il2cpp::get_class<app::InverterNode__Class>(type_info, "UberBehaviourTree", "InverterNode");
        }
        inline app::InverterNode* create() {
            return il2cpp::create_object<app::InverterNode>(get_class());
        }
    } // namespace InverterNode
} // namespace app::classes::types
