#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebuggableAttribute_DebuggingModes__Enum {
        namespace {
            app::DebuggableAttribute_DebuggingModes__Enum__Class* type_info_ref = nullptr;
        }
        app::DebuggableAttribute_DebuggingModes__Enum__Class** type_info = &type_info_ref;
        inline app::DebuggableAttribute_DebuggingModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebuggableAttribute_DebuggingModes__Enum__Class>(type_info, "System.Diagnostics", "DebuggableAttribute", "DebuggingModes");
        }
        inline app::DebuggableAttribute_DebuggingModes__Enum* create() {
            return il2cpp::create_object<app::DebuggableAttribute_DebuggingModes__Enum>(get_class());
        }
    } // namespace DebuggableAttribute_DebuggingModes__Enum
} // namespace app::classes::types
