#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stack_StackEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stack_StackEnumerator__Class** type_info;
        inline app::Stack_StackEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Stack_StackEnumerator__Class>(type_info, "System.Collections", "Stack", "StackEnumerator");
        }
        inline app::Stack_StackEnumerator* create() {
            return il2cpp::create_object<app::Stack_StackEnumerator>(get_class());
        }
    } // namespace Stack_StackEnumerator
} // namespace app::classes::types
