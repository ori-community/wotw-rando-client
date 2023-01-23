#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode__Class.h>
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode.h>
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode__Boxed.h>
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode__Array.h>

namespace app::classes::types {
    namespace BindingRestrictions_TestBuilder_AndNode {
        namespace {
            inline app::BindingRestrictions_TestBuilder_AndNode__Class* type_info_ref = nullptr;
        }
        inline app::BindingRestrictions_TestBuilder_AndNode__Class** type_info = &type_info_ref;
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
        inline app::BindingRestrictions_TestBuilder_AndNode__Array* create_array(const std::vector<app::BindingRestrictions_TestBuilder_AndNode>& items) {
            return il2cpp::array_new<app::BindingRestrictions_TestBuilder_AndNode__Array>(get_class(), items);
        }
    } // namespace BindingRestrictions_TestBuilder_AndNode
} // namespace app::classes::types
