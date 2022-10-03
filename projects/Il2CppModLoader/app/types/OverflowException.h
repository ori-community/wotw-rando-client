#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OverflowException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OverflowException__Class** type_info;
        inline app::OverflowException__Class* get_class() {
            return il2cpp::get_class<app::OverflowException__Class>(type_info, "System", "OverflowException");
        }
        inline app::OverflowException* create() {
            return il2cpp::create_object<app::OverflowException>(get_class());
        }
    } // namespace OverflowException
} // namespace app::classes::types
