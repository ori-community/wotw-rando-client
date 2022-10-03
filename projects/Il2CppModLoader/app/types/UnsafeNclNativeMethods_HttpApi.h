#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnsafeNclNativeMethods_HttpApi {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnsafeNclNativeMethods_HttpApi__Class** type_info;
        inline app::UnsafeNclNativeMethods_HttpApi__Class* get_class() {
            return il2cpp::get_nested_class<app::UnsafeNclNativeMethods_HttpApi__Class>(type_info, "System.Net", "UnsafeNclNativeMethods", "HttpApi");
        }
        inline app::UnsafeNclNativeMethods_HttpApi* create() {
            return il2cpp::create_object<app::UnsafeNclNativeMethods_HttpApi>(get_class());
        }
    } // namespace UnsafeNclNativeMethods_HttpApi
} // namespace app::classes::types
