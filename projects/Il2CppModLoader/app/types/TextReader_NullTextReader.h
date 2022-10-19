#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextReader_NullTextReader {
        inline app::TextReader_NullTextReader__Class** type_info = (app::TextReader_NullTextReader__Class**)(modloader::win::memory::resolve_rva(0x04783FF0));
        inline app::TextReader_NullTextReader__Class* get_class() {
            return il2cpp::get_nested_class<app::TextReader_NullTextReader__Class>(type_info, "System.IO", "TextReader", "NullTextReader");
        }
        inline app::TextReader_NullTextReader* create() {
            return il2cpp::create_object<app::TextReader_NullTextReader>(get_class());
        }
    } // namespace TextReader_NullTextReader
} // namespace app::classes::types
