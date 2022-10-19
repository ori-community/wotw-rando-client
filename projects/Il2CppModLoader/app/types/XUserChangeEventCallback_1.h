#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XUserChangeEventCallback_1 {
        inline app::XUserChangeEventCallback_1__Class** type_info = (app::XUserChangeEventCallback_1__Class**)(modloader::win::memory::resolve_rva(0x04774638));
        inline app::XUserChangeEventCallback_1__Class* get_class() {
            return il2cpp::get_class<app::XUserChangeEventCallback_1__Class>(type_info, "XGamingRuntime.Interop", "XUserChangeEventCallback");
        }
        inline app::XUserChangeEventCallback_1* create() {
            return il2cpp::create_object<app::XUserChangeEventCallback_1>(get_class());
        }
    } // namespace XUserChangeEventCallback_1
} // namespace app::classes::types
