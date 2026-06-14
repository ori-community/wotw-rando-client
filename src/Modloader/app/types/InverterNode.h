#pragma once
#include <Modloader/app/structs/InverterNode.h>
#include <Modloader/app/structs/InverterNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InverterNode {
        inline app::InverterNode__Class** type_info() {
            static app::InverterNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InverterNode__Class**)(modloader::win::memory::resolve_rva(0x04783320));
            }
            return cache;
        }
        inline app::InverterNode__Class* get_class() {
            return il2cpp::get_class<app::InverterNode__Class>(type_info(), "UberBehaviourTree", "InverterNode");
        }
        inline app::InverterNode* create() {
            return il2cpp::create_object<app::InverterNode>(get_class());
        }
    } // namespace InverterNode
} // namespace app::classes::types
