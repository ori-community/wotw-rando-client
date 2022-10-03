#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Parser_MD5_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Parser_MD5_c__Class** type_info;
        inline app::Parser_MD5_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Parser_MD5_c__Class>(type_info, "System.Net.Http.Headers", "Parser+MD5", "<>c");
        }
        inline app::Parser_MD5_c* create() {
            return il2cpp::create_object<app::Parser_MD5_c>(get_class());
        }
    } // namespace Parser_MD5_c
} // namespace app::classes::types
