#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageNode {
        namespace {
            inline app::MessageNode__Class* type_info_ref = nullptr;
        }
        inline app::MessageNode__Class** type_info = &type_info_ref;
        inline app::MessageNode__Class* get_class() {
            return il2cpp::get_class<app::MessageNode__Class>(type_info, "Moon.InteractionGraph", "MessageNode");
        }
        inline app::MessageNode* create() {
            return il2cpp::create_object<app::MessageNode>(get_class());
        }
    } // namespace MessageNode
} // namespace app::classes::types
