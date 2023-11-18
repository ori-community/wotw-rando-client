#pragma once
#include <Modloader/app/structs/MessageBox_HideAction__Enum_1.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageBox_HideAction__Enum_1 {
        inline app::MessageBox_HideAction__Enum_1__Class** type_info() {
            static app::MessageBox_HideAction__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageBox_HideAction__Enum_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageBox_HideAction__Enum_1__Class* get_class() {
            return il2cpp::get_nested_class<app::MessageBox_HideAction__Enum_1__Class>(type_info(), "Moon.UI", "MessageBox", "HideAction");
        }
        inline app::MessageBox_HideAction__Enum_1* create() {
            return il2cpp::create_object<app::MessageBox_HideAction__Enum_1>(get_class());
        }
    } // namespace MessageBox_HideAction__Enum_1
} // namespace app::classes::types
