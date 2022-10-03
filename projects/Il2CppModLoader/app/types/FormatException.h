#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FormatException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FormatException__Class** type_info;
        inline app::FormatException__Class* get_class() {
            return il2cpp::get_class<app::FormatException__Class>(type_info, "System", "FormatException");
        }
        inline app::FormatException* create() {
            return il2cpp::create_object<app::FormatException>(get_class());
        }
    } // namespace FormatException
} // namespace app::classes::types
