#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XUserAddCompleted {
        inline app::XUserAddCompleted__Class** type_info = (app::XUserAddCompleted__Class**)(modloader::win::memory::resolve_rva(0x0476AE78));
        inline app::XUserAddCompleted__Class* get_class() {
            return il2cpp::get_class<app::XUserAddCompleted__Class>(type_info, "XGamingRuntime", "XUserAddCompleted");
        }
        inline app::XUserAddCompleted* create() {
            return il2cpp::create_object<app::XUserAddCompleted>(get_class());
        }
    } // namespace XUserAddCompleted
} // namespace app::classes::types
