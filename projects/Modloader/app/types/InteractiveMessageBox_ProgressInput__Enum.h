#pragma once
#include <Modloader/app/structs/InteractiveMessageBox_ProgressInput__Enum.h>
#include <Modloader/app/structs/InteractiveMessageBox_ProgressInput__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractiveMessageBox_ProgressInput__Enum {
        inline app::InteractiveMessageBox_ProgressInput__Enum__Class** type_info() {
            static app::InteractiveMessageBox_ProgressInput__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractiveMessageBox_ProgressInput__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractiveMessageBox_ProgressInput__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractiveMessageBox_ProgressInput__Enum__Class>(type_info(), "", "InteractiveMessageBox", "ProgressInput");
        }
        inline app::InteractiveMessageBox_ProgressInput__Enum* create() {
            return il2cpp::create_object<app::InteractiveMessageBox_ProgressInput__Enum>(get_class());
        }
    } // namespace InteractiveMessageBox_ProgressInput__Enum
} // namespace app::classes::types
