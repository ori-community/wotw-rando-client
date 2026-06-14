#pragma once
#include <Modloader/app/structs/InteractionNode.h>
#include <Modloader/app/structs/InteractionNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionNode {
        inline app::InteractionNode__Class** type_info() {
            static app::InteractionNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionNode__Class* get_class() {
            return il2cpp::get_class<app::InteractionNode__Class>(type_info(), "Moon.InteractionGraph", "InteractionNode");
        }
        inline app::InteractionNode* create() {
            return il2cpp::create_object<app::InteractionNode>(get_class());
        }
    } // namespace InteractionNode
} // namespace app::classes::types
