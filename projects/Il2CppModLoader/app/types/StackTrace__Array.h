#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StackTrace__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StackTrace__Array__Class** type_info;
        inline app::StackTrace__Array__Class* get_class() {
            return il2cpp::get_class<app::StackTrace__Array__Class>(type_info, "System.Diagnostics", "StackTrace[]");
        }
        inline app::StackTrace__Array* create() {
            return il2cpp::create_object<app::StackTrace__Array>(get_class());
        }
    } // namespace StackTrace__Array
} // namespace app::classes::types
