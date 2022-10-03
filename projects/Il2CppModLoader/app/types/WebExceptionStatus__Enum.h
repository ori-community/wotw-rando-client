#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebExceptionStatus__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebExceptionStatus__Enum__Class** type_info;
        inline app::WebExceptionStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebExceptionStatus__Enum__Class>(type_info, "System.Net", "WebExceptionStatus");
        }
        inline app::WebExceptionStatus__Enum* create() {
            return il2cpp::create_object<app::WebExceptionStatus__Enum>(get_class());
        }
    } // namespace WebExceptionStatus__Enum
} // namespace app::classes::types
