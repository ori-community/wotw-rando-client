#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Lexer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Lexer__Class** type_info;
        inline app::Lexer__Class* get_class() {
            return il2cpp::get_class<app::Lexer__Class>(type_info, "System.Net.Http.Headers", "Lexer");
        }
        inline app::Lexer* create() {
            return il2cpp::create_object<app::Lexer>(get_class());
        }
    } // namespace Lexer
} // namespace app::classes::types
