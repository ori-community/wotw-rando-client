#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID__Class** type_info;
        inline app::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID__Class>(type_info, "System.Net", "UnsafeNclNativeMethods+HttpApi", "HTTP_REQUEST_HEADER_ID");
        }
        inline app::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID* create() {
            return il2cpp::create_object<app::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID>(get_class());
        }
    } // namespace UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID
} // namespace app::classes::types
