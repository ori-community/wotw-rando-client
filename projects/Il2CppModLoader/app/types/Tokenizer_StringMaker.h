#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tokenizer_StringMaker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tokenizer_StringMaker__Class** type_info;
        inline app::Tokenizer_StringMaker__Class* get_class() {
            return il2cpp::get_nested_class<app::Tokenizer_StringMaker__Class>(type_info, "System.Security.Util", "Tokenizer", "StringMaker");
        }
        inline app::Tokenizer_StringMaker* create() {
            return il2cpp::create_object<app::Tokenizer_StringMaker>(get_class());
        }
    } // namespace Tokenizer_StringMaker
} // namespace app::classes::types
