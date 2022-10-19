#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Stack_StackDebugView {
        namespace {
            inline app::Stack_StackDebugView__Class* type_info_ref = nullptr;
        }
        inline app::Stack_StackDebugView__Class** type_info = &type_info_ref;
        inline app::Stack_StackDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::Stack_StackDebugView__Class>(type_info, "System.Collections", "Stack", "StackDebugView");
        }
        inline app::Stack_StackDebugView* create() {
            return il2cpp::create_object<app::Stack_StackDebugView>(get_class());
        }
    } // namespace Stack_StackDebugView
} // namespace app::classes::types
