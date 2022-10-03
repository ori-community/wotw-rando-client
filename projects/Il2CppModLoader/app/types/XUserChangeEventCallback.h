#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserChangeEventCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XUserChangeEventCallback__Class** type_info;
        inline app::XUserChangeEventCallback__Class* get_class() {
            return il2cpp::get_class<app::XUserChangeEventCallback__Class>(type_info, "XGamingRuntime", "XUserChangeEventCallback");
        }
        inline app::XUserChangeEventCallback* create() {
            return il2cpp::create_object<app::XUserChangeEventCallback>(get_class());
        }
    } // namespace XUserChangeEventCallback
} // namespace app::classes::types
