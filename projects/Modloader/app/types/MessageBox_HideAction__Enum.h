#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum__Class.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>

namespace app::classes::types {
    namespace MessageBox_HideAction__Enum {
        namespace {
            inline app::MessageBox_HideAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MessageBox_HideAction__Enum__Class** type_info = &type_info_ref;
        inline app::MessageBox_HideAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MessageBox_HideAction__Enum__Class>(type_info, "", "MessageBox", "HideAction");
        }
        inline app::MessageBox_HideAction__Enum* create() {
            return il2cpp::create_object<app::MessageBox_HideAction__Enum>(get_class());
        }
    } // namespace MessageBox_HideAction__Enum
} // namespace app::classes::types
