#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageNode {
        namespace {
            app::MessageNode__Class* type_info_ref = nullptr;
        }
        app::MessageNode__Class** type_info = &type_info_ref;
        inline app::MessageNode__Class* get_class() {
            return il2cpp::get_class<app::MessageNode__Class>(type_info, "Moon.InteractionGraph", "MessageNode");
        }
        inline app::MessageNode* create() {
            return il2cpp::create_object<app::MessageNode>(get_class());
        }
    } // namespace MessageNode
} // namespace app::classes::types
