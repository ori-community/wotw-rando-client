#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID {
        inline app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class** type_info = (app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class**)(modloader::win::memory::resolve_rva(0x04784878));
        inline app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class>(type_info, "System.Net", "UnsafeNclNativeMethods+HttpApi", "HTTP_RESPONSE_HEADER_ID");
        }
        inline app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID* create() {
            return il2cpp::create_object<app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID>(get_class());
        }
    } // namespace UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID
} // namespace app::classes::types
