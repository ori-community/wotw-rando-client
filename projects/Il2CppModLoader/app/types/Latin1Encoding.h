#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Latin1Encoding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Latin1Encoding__Class** type_info;
        inline app::Latin1Encoding__Class* get_class() {
            return il2cpp::get_class<app::Latin1Encoding__Class>(type_info, "System.Text", "Latin1Encoding");
        }
        inline app::Latin1Encoding* create() {
            return il2cpp::create_object<app::Latin1Encoding>(get_class());
        }
    } // namespace Latin1Encoding
} // namespace app::classes::types
