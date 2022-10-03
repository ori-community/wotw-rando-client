#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogNode {
        namespace {
            app::DialogNode__Class* type_info_ref = nullptr;
        }
        app::DialogNode__Class** type_info = &type_info_ref;
        inline app::DialogNode__Class* get_class() {
            return il2cpp::get_class<app::DialogNode__Class>(type_info, "", "DialogNode");
        }
        inline app::DialogNode* create() {
            return il2cpp::create_object<app::DialogNode>(get_class());
        }
    } // namespace DialogNode
} // namespace app::classes::types
