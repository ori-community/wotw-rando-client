#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoCMethod {
        inline app::MonoCMethod__Class** type_info = (app::MonoCMethod__Class**)(modloader::win::memory::resolve_rva(0x04771E20));
        inline app::MonoCMethod__Class* get_class() {
            return il2cpp::get_class<app::MonoCMethod__Class>(type_info, "System.Reflection", "MonoCMethod");
        }
        inline app::MonoCMethod* create() {
            return il2cpp::create_object<app::MonoCMethod>(get_class());
        }
    } // namespace MonoCMethod
} // namespace app::classes::types
