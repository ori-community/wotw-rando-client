#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionNode {
        namespace {
            inline app::InteractionNode__Class* type_info_ref = nullptr;
        }
        inline app::InteractionNode__Class** type_info = &type_info_ref;
        inline app::InteractionNode__Class* get_class() {
            return il2cpp::get_class<app::InteractionNode__Class>(type_info, "Moon.InteractionGraph", "InteractionNode");
        }
        inline app::InteractionNode* create() {
            return il2cpp::create_object<app::InteractionNode>(get_class());
        }
    } // namespace InteractionNode
} // namespace app::classes::types
