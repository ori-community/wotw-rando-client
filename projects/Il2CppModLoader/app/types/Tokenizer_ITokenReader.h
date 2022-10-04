#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tokenizer_ITokenReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tokenizer_ITokenReader__Class** type_info;
        inline app::Tokenizer_ITokenReader__Class* get_class() {
            return il2cpp::get_nested_class<app::Tokenizer_ITokenReader__Class>(type_info, "System.Security.Util", "Tokenizer", "ITokenReader");
        }
        inline app::Tokenizer_ITokenReader* create() {
            return il2cpp::create_object<app::Tokenizer_ITokenReader>(get_class());
        }
    } // namespace Tokenizer_ITokenReader
} // namespace app::classes::types
