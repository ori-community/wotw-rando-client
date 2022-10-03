#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PathTooLongException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PathTooLongException__Class** type_info;
        inline app::PathTooLongException__Class* get_class() {
            return il2cpp::get_class<app::PathTooLongException__Class>(type_info, "System.IO", "PathTooLongException");
        }
        inline app::PathTooLongException* create() {
            return il2cpp::create_object<app::PathTooLongException>(get_class());
        }
    } // namespace PathTooLongException
} // namespace app::classes::types
