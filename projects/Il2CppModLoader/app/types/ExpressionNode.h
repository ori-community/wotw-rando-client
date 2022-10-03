#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpressionNode {
        namespace {
            app::ExpressionNode__Class* type_info_ref = nullptr;
        }
        app::ExpressionNode__Class** type_info = &type_info_ref;
        inline app::ExpressionNode__Class* get_class() {
            return il2cpp::get_class<app::ExpressionNode__Class>(type_info, "System.Data", "ExpressionNode");
        }
        inline app::ExpressionNode* create() {
            return il2cpp::create_object<app::ExpressionNode>(get_class());
        }
        inline app::ExpressionNode__Array* create_array(int size) {
            return il2cpp::array_new<app::ExpressionNode__Array>(get_class(), size);
        }
    } // namespace ExpressionNode
} // namespace app::classes::types
