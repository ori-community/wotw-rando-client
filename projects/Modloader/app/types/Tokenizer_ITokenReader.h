#pragma once
#include <Modloader/app/structs/Tokenizer_ITokenReader.h>
#include <Modloader/app/structs/Tokenizer_ITokenReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tokenizer_ITokenReader {
        inline app::Tokenizer_ITokenReader__Class** type_info() {
            static app::Tokenizer_ITokenReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tokenizer_ITokenReader__Class**)(modloader::win::memory::resolve_rva(0x0478A5D0));
            }
            return cache;
        }
        inline app::Tokenizer_ITokenReader__Class* get_class() {
            return il2cpp::get_nested_class<app::Tokenizer_ITokenReader__Class>(type_info(), "System.Security.Util", "Tokenizer", "ITokenReader");
        }
    } // namespace Tokenizer_ITokenReader
} // namespace app::classes::types
