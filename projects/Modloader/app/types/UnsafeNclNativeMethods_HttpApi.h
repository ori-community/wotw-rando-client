#pragma once
#include <Modloader/app/structs/UnsafeNclNativeMethods_HttpApi.h>
#include <Modloader/app/structs/UnsafeNclNativeMethods_HttpApi__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsafeNclNativeMethods_HttpApi {
        inline app::UnsafeNclNativeMethods_HttpApi__Class** type_info() {
            static app::UnsafeNclNativeMethods_HttpApi__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnsafeNclNativeMethods_HttpApi__Class**)(modloader::win::memory::resolve_rva(0x04702C40));
            }
            return cache;
        }
        inline app::UnsafeNclNativeMethods_HttpApi__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNclNativeMethods_HttpApi__Class>(type_info(), "System.Net", "UnsafeNclNativeMethods", "HttpApi");
        }
        inline app::UnsafeNclNativeMethods_HttpApi* create() {
            return il2cpp::create_object<app::UnsafeNclNativeMethods_HttpApi>(get_class());
        }
    } // namespace UnsafeNclNativeMethods_HttpApi
} // namespace app::classes::types
