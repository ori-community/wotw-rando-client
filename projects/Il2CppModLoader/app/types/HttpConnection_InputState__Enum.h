#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpConnection_InputState__Enum {
        namespace {
            inline app::HttpConnection_InputState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HttpConnection_InputState__Enum__Class** type_info = &type_info_ref;
        inline app::HttpConnection_InputState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpConnection_InputState__Enum__Class>(type_info, "System.Net", "HttpConnection", "InputState");
        }
        inline app::HttpConnection_InputState__Enum* create() {
            return il2cpp::create_object<app::HttpConnection_InputState__Enum>(get_class());
        }
    } // namespace HttpConnection_InputState__Enum
} // namespace app::classes::types
