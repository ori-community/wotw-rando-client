#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextReader_SyncTextReader {
        inline app::TextReader_SyncTextReader__Class** type_info = (app::TextReader_SyncTextReader__Class**)(modloader::win::memory::resolve_rva(0x04709188));
        inline app::TextReader_SyncTextReader__Class* get_class() {
            return il2cpp::get_nested_class<app::TextReader_SyncTextReader__Class>(type_info, "System.IO", "TextReader", "SyncTextReader");
        }
        inline app::TextReader_SyncTextReader* create() {
            return il2cpp::create_object<app::TextReader_SyncTextReader>(get_class());
        }
    } // namespace TextReader_SyncTextReader
} // namespace app::classes::types
