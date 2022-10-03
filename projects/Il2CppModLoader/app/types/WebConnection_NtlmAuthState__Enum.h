#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebConnection_NtlmAuthState__Enum {
        namespace {
            app::WebConnection_NtlmAuthState__Enum__Class* type_info_ref = nullptr;
        }
        app::WebConnection_NtlmAuthState__Enum__Class** type_info = &type_info_ref;
        inline app::WebConnection_NtlmAuthState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WebConnection_NtlmAuthState__Enum__Class>(type_info, "System.Net", "WebConnection", "NtlmAuthState");
        }
        inline app::WebConnection_NtlmAuthState__Enum* create() {
            return il2cpp::create_object<app::WebConnection_NtlmAuthState__Enum>(get_class());
        }
    } // namespace WebConnection_NtlmAuthState__Enum
} // namespace app::classes::types
