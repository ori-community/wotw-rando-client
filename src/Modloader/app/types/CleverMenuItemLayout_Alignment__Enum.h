#pragma once
#include <Modloader/app/structs/CleverMenuItemLayout_Alignment__Enum.h>
#include <Modloader/app/structs/CleverMenuItemLayout_Alignment__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemLayout_Alignment__Enum {
        inline app::CleverMenuItemLayout_Alignment__Enum__Class** type_info() {
            static app::CleverMenuItemLayout_Alignment__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemLayout_Alignment__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemLayout_Alignment__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemLayout_Alignment__Enum__Class>(type_info(), "", "CleverMenuItemLayout", "Alignment");
        }
        inline app::CleverMenuItemLayout_Alignment__Enum* create() {
            return il2cpp::create_object<app::CleverMenuItemLayout_Alignment__Enum>(get_class());
        }
    } // namespace CleverMenuItemLayout_Alignment__Enum
} // namespace app::classes::types
