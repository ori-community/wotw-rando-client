#pragma once
#include <Modloader/app/structs/DebuggableAttribute_DebuggingModes__Enum.h>
#include <Modloader/app/structs/DebuggableAttribute_DebuggingModes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggableAttribute_DebuggingModes__Enum {
        inline app::DebuggableAttribute_DebuggingModes__Enum__Class** type_info() {
            static app::DebuggableAttribute_DebuggingModes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebuggableAttribute_DebuggingModes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebuggableAttribute_DebuggingModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebuggableAttribute_DebuggingModes__Enum__Class>(type_info(), "System.Diagnostics", "DebuggableAttribute", "DebuggingModes");
        }
        inline app::DebuggableAttribute_DebuggingModes__Enum* create() {
            return il2cpp::create_object<app::DebuggableAttribute_DebuggingModes__Enum>(get_class());
        }
    } // namespace DebuggableAttribute_DebuggingModes__Enum
} // namespace app::classes::types
