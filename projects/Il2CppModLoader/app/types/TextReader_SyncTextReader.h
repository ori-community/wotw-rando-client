#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextReader_SyncTextReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextReader_SyncTextReader__Class** type_info;
        inline app::TextReader_SyncTextReader__Class* get_class() {
            return il2cpp::get_nested_class<app::TextReader_SyncTextReader__Class>(type_info, "System.IO", "TextReader", "SyncTextReader");
        }
        inline app::TextReader_SyncTextReader* create() {
            return il2cpp::create_object<app::TextReader_SyncTextReader>(get_class());
        }
    } // namespace TextReader_SyncTextReader
} // namespace app::classes::types
