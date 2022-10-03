#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tokenizer_StreamTokenReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tokenizer_StreamTokenReader__Class** type_info;
        inline app::Tokenizer_StreamTokenReader__Class* get_class() {
            return il2cpp::get_nested_class<app::Tokenizer_StreamTokenReader__Class>(type_info, "System.Security.Util", "Tokenizer", "StreamTokenReader");
        }
        inline app::Tokenizer_StreamTokenReader* create() {
            return il2cpp::create_object<app::Tokenizer_StreamTokenReader>(get_class());
        }
    } // namespace Tokenizer_StreamTokenReader
} // namespace app::classes::types
