#pragma once
#include <Modloader/app/structs/MessageNode.h>
#include <Modloader/app/structs/MessageNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageNode {
        inline app::MessageNode__Class** type_info() {
            static app::MessageNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageNode__Class* get_class() {
            return il2cpp::get_class<app::MessageNode__Class>(type_info(), "Moon.InteractionGraph", "MessageNode");
        }
        inline app::MessageNode* create() {
            return il2cpp::create_object<app::MessageNode>(get_class());
        }
    } // namespace MessageNode
} // namespace app::classes::types
