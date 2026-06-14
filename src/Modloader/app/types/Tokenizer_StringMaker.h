#pragma once
#include <Modloader/app/structs/Tokenizer_StringMaker.h>
#include <Modloader/app/structs/Tokenizer_StringMaker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tokenizer_StringMaker {
        inline app::Tokenizer_StringMaker__Class** type_info() {
            static app::Tokenizer_StringMaker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tokenizer_StringMaker__Class**)(modloader::win::memory::resolve_rva(0x04717100));
            }
            return cache;
        }
        inline app::Tokenizer_StringMaker__Class* get_class() {
            return il2cpp::get_nested_class<app::Tokenizer_StringMaker__Class>(type_info(), "System.Security.Util", "Tokenizer", "StringMaker");
        }
        inline app::Tokenizer_StringMaker* create() {
            return il2cpp::create_object<app::Tokenizer_StringMaker>(get_class());
        }
    } // namespace Tokenizer_StringMaker
} // namespace app::classes::types
