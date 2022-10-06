#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions_TestBuilder_AndNode {
        namespace {
            app::BindingRestrictions_TestBuilder_AndNode__Class* type_info_ref = nullptr;
        }
        app::BindingRestrictions_TestBuilder_AndNode__Class** type_info = &type_info_ref;
        inline app::BindingRestrictions_TestBuilder_AndNode__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_TestBuilder_AndNode__Class>(type_info, "System.Dynamic", "BindingRestrictions+TestBuilder", "AndNode");
        }
        inline app::BindingRestrictions_TestBuilder_AndNode* create() {
            return il2cpp::create_object<app::BindingRestrictions_TestBuilder_AndNode>(get_class());
        }
        inline app::BindingRestrictions_TestBuilder_AndNode__Boxed* box(app::BindingRestrictions_TestBuilder_AndNode value) {
            return il2cpp::box_value<app::BindingRestrictions_TestBuilder_AndNode__Boxed>(get_class(), value);
        }
        inline app::BindingRestrictions_TestBuilder_AndNode__Array* create_array(int size) {
            return il2cpp::array_new<app::BindingRestrictions_TestBuilder_AndNode__Array>(get_class(), size);
        }
        inline app::BindingRestrictions_TestBuilder_AndNode__Array* create_array(const std::vector<app::BindingRestrictions_TestBuilder_AndNode__Boxed>& items) {
            return il2cpp::array_new<app::BindingRestrictions_TestBuilder_AndNode__Array>(get_class(), items);
        }
    } // namespace BindingRestrictions_TestBuilder_AndNode
} // namespace app::classes::types
