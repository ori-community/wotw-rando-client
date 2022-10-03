#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyInteractionNode {
        namespace {
            app::EmptyInteractionNode__Class* type_info_ref = nullptr;
        }
        app::EmptyInteractionNode__Class** type_info = &type_info_ref;
        inline app::EmptyInteractionNode__Class* get_class() {
            return il2cpp::get_class<app::EmptyInteractionNode__Class>(type_info, "Moon.InteractionGraph", "EmptyInteractionNode");
        }
        inline app::EmptyInteractionNode* create() {
            return il2cpp::create_object<app::EmptyInteractionNode>(get_class());
        }
    } // namespace EmptyInteractionNode
} // namespace app::classes::types
