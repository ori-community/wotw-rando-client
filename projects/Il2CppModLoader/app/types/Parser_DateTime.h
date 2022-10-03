#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Parser_DateTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Parser_DateTime__Class** type_info;
        inline app::Parser_DateTime__Class* get_class() {
            return il2cpp::get_nested_class<app::Parser_DateTime__Class>(type_info, "System.Net.Http.Headers", "Parser", "DateTime");
        }
        inline app::Parser_DateTime* create() {
            return il2cpp::create_object<app::Parser_DateTime>(get_class());
        }
    } // namespace Parser_DateTime
} // namespace app::classes::types
