#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnicodeEncoding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnicodeEncoding__Class** type_info;
        inline app::UnicodeEncoding__Class* get_class() {
            return il2cpp::get_class<app::UnicodeEncoding__Class>(type_info, "System.Text", "UnicodeEncoding");
        }
        inline app::UnicodeEncoding* create() {
            return il2cpp::create_object<app::UnicodeEncoding>(get_class());
        }
    } // namespace UnicodeEncoding
} // namespace app::classes::types
