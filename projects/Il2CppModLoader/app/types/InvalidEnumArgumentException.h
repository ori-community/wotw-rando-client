#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidEnumArgumentException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvalidEnumArgumentException__Class** type_info;
        inline app::InvalidEnumArgumentException__Class* get_class() {
            return il2cpp::get_class<app::InvalidEnumArgumentException__Class>(type_info, "System.ComponentModel", "InvalidEnumArgumentException");
        }
        inline app::InvalidEnumArgumentException* create() {
            return il2cpp::create_object<app::InvalidEnumArgumentException>(get_class());
        }
    } // namespace InvalidEnumArgumentException
} // namespace app::classes::types
