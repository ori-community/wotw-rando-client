#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidOperationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvalidOperationException__Class** type_info;
        inline app::InvalidOperationException__Class* get_class() {
            return il2cpp::get_class<app::InvalidOperationException__Class>(type_info, "System", "InvalidOperationException");
        }
        inline app::InvalidOperationException* create() {
            return il2cpp::create_object<app::InvalidOperationException>(get_class());
        }
    } // namespace InvalidOperationException
} // namespace app::classes::types
