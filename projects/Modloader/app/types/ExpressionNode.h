#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExpressionNode__Class.h>
#include <Modloader/app/structs/ExpressionNode.h>
#include <Modloader/app/structs/ExpressionNode__Array.h>

namespace app::classes::types {
    namespace ExpressionNode {
        namespace {
            inline app::ExpressionNode__Class* type_info_ref = nullptr;
        }
        inline app::ExpressionNode__Class** type_info = &type_info_ref;
        inline app::ExpressionNode__Class* get_class() {
            return il2cpp::get_class<app::ExpressionNode__Class>(type_info, "System.Data", "ExpressionNode");
        }
        inline app::ExpressionNode* create() {
            return il2cpp::create_object<app::ExpressionNode>(get_class());
        }
        inline app::ExpressionNode__Array* create_array(int size) {
            return il2cpp::array_new<app::ExpressionNode__Array>(get_class(), size);
        }
        inline app::ExpressionNode__Array* create_array(const std::vector<app::ExpressionNode*>& items) {
            return il2cpp::array_new<app::ExpressionNode__Array>(get_class(), items);
        }
    } // namespace ExpressionNode
} // namespace app::classes::types
