#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriFormatException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UriFormatException__Class** type_info;
        inline app::UriFormatException__Class* get_class() {
            return il2cpp::get_class<app::UriFormatException__Class>(type_info, "System", "UriFormatException");
        }
        inline app::UriFormatException* create() {
            return il2cpp::create_object<app::UriFormatException>(get_class());
        }
    } // namespace UriFormatException
} // namespace app::classes::types
