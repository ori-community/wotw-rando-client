#pragma once
#include <Modloader/app/structs/UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID.h>
#include <Modloader/app/structs/UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID {
        inline app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class** type_info() {
            static app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class**)(modloader::win::memory::resolve_rva(0x04784878));
            }
            return cache;
        }
        inline app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class>(type_info(), "System.Net", "UnsafeNclNativeMethods+HttpApi", "HTTP_RESPONSE_HEADER_ID");
        }
        inline app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID* create() {
            return il2cpp::create_object<app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID>(get_class());
        }
    } // namespace UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID
} // namespace app::classes::types
