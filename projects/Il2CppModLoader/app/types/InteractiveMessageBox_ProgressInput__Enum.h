#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractiveMessageBox_ProgressInput__Enum {
        namespace {
            inline app::InteractiveMessageBox_ProgressInput__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InteractiveMessageBox_ProgressInput__Enum__Class** type_info = &type_info_ref;
        inline app::InteractiveMessageBox_ProgressInput__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractiveMessageBox_ProgressInput__Enum__Class>(type_info, "", "InteractiveMessageBox", "ProgressInput");
        }
        inline app::InteractiveMessageBox_ProgressInput__Enum* create() {
            return il2cpp::create_object<app::InteractiveMessageBox_ProgressInput__Enum>(get_class());
        }
    } // namespace InteractiveMessageBox_ProgressInput__Enum
} // namespace app::classes::types
