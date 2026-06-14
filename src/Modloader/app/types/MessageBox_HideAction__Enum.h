#pragma once
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageBox_HideAction__Enum {
        inline app::MessageBox_HideAction__Enum__Class** type_info() {
            static app::MessageBox_HideAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageBox_HideAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageBox_HideAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MessageBox_HideAction__Enum__Class>(type_info(), "", "MessageBox", "HideAction");
        }
        inline app::MessageBox_HideAction__Enum* create() {
            return il2cpp::create_object<app::MessageBox_HideAction__Enum>(get_class());
        }
    } // namespace MessageBox_HideAction__Enum
} // namespace app::classes::types
