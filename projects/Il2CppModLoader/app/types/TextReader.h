#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextReader {
        inline app::TextReader__Class** type_info = (app::TextReader__Class**)(modloader::win::memory::resolve_rva(0x04765720));
        inline app::TextReader__Class* get_class() {
            return il2cpp::get_class<app::TextReader__Class>(type_info, "System.IO", "TextReader");
        }
        inline app::TextReader* create() {
            return il2cpp::create_object<app::TextReader>(get_class());
        }
    } // namespace TextReader
} // namespace app::classes::types
