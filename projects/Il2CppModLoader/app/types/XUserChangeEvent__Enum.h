#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserChangeEvent__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XUserChangeEvent__Enum__Class** type_info;
        inline app::XUserChangeEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserChangeEvent__Enum__Class>(type_info, "XGamingRuntime", "XUserChangeEvent");
        }
        inline app::XUserChangeEvent__Enum* create() {
            return il2cpp::create_object<app::XUserChangeEvent__Enum>(get_class());
        }
    } // namespace XUserChangeEvent__Enum
} // namespace app::classes::types
