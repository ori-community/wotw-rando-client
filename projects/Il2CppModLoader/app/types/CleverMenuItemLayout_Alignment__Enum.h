#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemLayout_Alignment__Enum {
        namespace {
            app::CleverMenuItemLayout_Alignment__Enum__Class* type_info_ref = nullptr;
        }
        app::CleverMenuItemLayout_Alignment__Enum__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemLayout_Alignment__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemLayout_Alignment__Enum__Class>(type_info, "", "CleverMenuItemLayout", "Alignment");
        }
        inline app::CleverMenuItemLayout_Alignment__Enum* create() {
            return il2cpp::create_object<app::CleverMenuItemLayout_Alignment__Enum>(get_class());
        }
    } // namespace CleverMenuItemLayout_Alignment__Enum
} // namespace app::classes::types
