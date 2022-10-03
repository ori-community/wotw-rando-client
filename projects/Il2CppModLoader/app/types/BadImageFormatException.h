#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BadImageFormatException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BadImageFormatException__Class** type_info;
        inline app::BadImageFormatException__Class* get_class() {
            return il2cpp::get_class<app::BadImageFormatException__Class>(type_info, "System", "BadImageFormatException");
        }
        inline app::BadImageFormatException* create() {
            return il2cpp::create_object<app::BadImageFormatException>(get_class());
        }
    } // namespace BadImageFormatException
} // namespace app::classes::types
