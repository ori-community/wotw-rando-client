#pragma once
#include <Modloader/app/structs/EmptyInteractionNode.h>
#include <Modloader/app/structs/EmptyInteractionNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmptyInteractionNode {
        inline app::EmptyInteractionNode__Class** type_info() {
            static app::EmptyInteractionNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmptyInteractionNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmptyInteractionNode__Class* get_class() {
            return il2cpp::get_class<app::EmptyInteractionNode__Class>(type_info(), "Moon.InteractionGraph", "EmptyInteractionNode");
        }
        inline app::EmptyInteractionNode* create() {
            return il2cpp::create_object<app::EmptyInteractionNode>(get_class());
        }
    } // namespace EmptyInteractionNode
} // namespace app::classes::types
