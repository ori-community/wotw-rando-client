#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UTF8Encoding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UTF8Encoding__Class** type_info;
        inline app::UTF8Encoding__Class* get_class() {
            return il2cpp::get_class<app::UTF8Encoding__Class>(type_info, "System.Text", "UTF8Encoding");
        }
        inline app::UTF8Encoding* create() {
            return il2cpp::create_object<app::UTF8Encoding>(get_class());
        }
    } // namespace UTF8Encoding
} // namespace app::classes::types
