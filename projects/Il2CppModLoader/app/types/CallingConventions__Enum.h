#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallingConventions__Enum {
        namespace {
            app::CallingConventions__Enum__Class* type_info_ref = nullptr;
        }
        app::CallingConventions__Enum__Class** type_info = &type_info_ref;
        inline app::CallingConventions__Enum__Class* get_class() {
            return il2cpp::get_class<app::CallingConventions__Enum__Class>(type_info, "System.Reflection", "CallingConventions");
        }
        inline app::CallingConventions__Enum* create() {
            return il2cpp::create_object<app::CallingConventions__Enum>(get_class());
        }
    } // namespace CallingConventions__Enum
} // namespace app::classes::types
