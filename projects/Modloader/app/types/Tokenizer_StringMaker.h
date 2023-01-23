#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Tokenizer_StringMaker__Class.h>
#include <Modloader/app/structs/Tokenizer_StringMaker.h>

namespace app::classes::types {
    namespace Tokenizer_StringMaker {
        inline app::Tokenizer_StringMaker__Class** type_info = (app::Tokenizer_StringMaker__Class**)(modloader::win::memory::resolve_rva(0x04717100));
        inline app::Tokenizer_StringMaker__Class* get_class() {
            return il2cpp::get_nested_class<app::Tokenizer_StringMaker__Class>(type_info, "System.Security.Util", "Tokenizer", "StringMaker");
        }
        inline app::Tokenizer_StringMaker* create() {
            return il2cpp::create_object<app::Tokenizer_StringMaker>(get_class());
        }
    } // namespace Tokenizer_StringMaker
} // namespace app::classes::types
