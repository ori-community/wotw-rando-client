#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Parser_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Parser_1__Class** type_info;
        inline app::Parser_1__Class* get_class() {
            return il2cpp::get_class<app::Parser_1__Class>(type_info, "System.Xml.Schema", "Parser");
        }
        inline app::Parser_1* create() {
            return il2cpp::create_object<app::Parser_1>(get_class());
        }
    } // namespace Parser_1
} // namespace app::classes::types
