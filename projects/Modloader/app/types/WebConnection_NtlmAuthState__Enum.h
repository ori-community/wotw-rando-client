#pragma once
#include <Modloader/app/structs/WebConnection_NtlmAuthState__Enum.h>
#include <Modloader/app/structs/WebConnection_NtlmAuthState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnection_NtlmAuthState__Enum {
        inline app::WebConnection_NtlmAuthState__Enum__Class** type_info() {
            static app::WebConnection_NtlmAuthState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebConnection_NtlmAuthState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebConnection_NtlmAuthState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WebConnection_NtlmAuthState__Enum__Class>(type_info(), "System.Net", "WebConnection", "NtlmAuthState");
        }
        inline app::WebConnection_NtlmAuthState__Enum* create() {
            return il2cpp::create_object<app::WebConnection_NtlmAuthState__Enum>(get_class());
        }
    } // namespace WebConnection_NtlmAuthState__Enum
} // namespace app::classes::types
