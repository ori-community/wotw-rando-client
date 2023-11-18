#pragma once
#include <Modloader/app/structs/Tokenizer_StreamTokenReader.h>
#include <Modloader/app/structs/Tokenizer_StreamTokenReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tokenizer_StreamTokenReader {
        inline app::Tokenizer_StreamTokenReader__Class** type_info() {
            static app::Tokenizer_StreamTokenReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tokenizer_StreamTokenReader__Class**)(modloader::win::memory::resolve_rva(0x04737EB0));
            }
            return cache;
        }
        inline app::Tokenizer_StreamTokenReader__Class* get_class() {
            return il2cpp::get_nested_class<app::Tokenizer_StreamTokenReader__Class>(type_info(), "System.Security.Util", "Tokenizer", "StreamTokenReader");
        }
        inline app::Tokenizer_StreamTokenReader* create() {
            return il2cpp::create_object<app::Tokenizer_StreamTokenReader>(get_class());
        }
    } // namespace Tokenizer_StreamTokenReader
} // namespace app::classes::types
