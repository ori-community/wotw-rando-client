#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XUserHandle__Class** type_info;
        inline app::XUserHandle__Class* get_class() {
            return il2cpp::get_class<app::XUserHandle__Class>(type_info, "XGamingRuntime", "XUserHandle");
        }
        inline app::XUserHandle* create() {
            return il2cpp::create_object<app::XUserHandle>(get_class());
        }
    } // namespace XUserHandle
} // namespace app::classes::types
