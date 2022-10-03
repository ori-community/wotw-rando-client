#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserChangeEventCallback_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XUserChangeEventCallback_1__Class** type_info;
        inline app::XUserChangeEventCallback_1__Class* get_class() {
            return il2cpp::get_class<app::XUserChangeEventCallback_1__Class>(type_info, "XGamingRuntime.Interop", "XUserChangeEventCallback");
        }
        inline app::XUserChangeEventCallback_1* create() {
            return il2cpp::create_object<app::XUserChangeEventCallback_1>(get_class());
        }
    } // namespace XUserChangeEventCallback_1
} // namespace app::classes::types
