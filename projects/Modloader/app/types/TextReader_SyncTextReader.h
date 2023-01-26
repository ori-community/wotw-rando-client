#pragma once
#include <Modloader/app/structs/TextReader_SyncTextReader.h>
#include <Modloader/app/structs/TextReader_SyncTextReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextReader_SyncTextReader {
        inline app::TextReader_SyncTextReader__Class** type_info() {
            static app::TextReader_SyncTextReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextReader_SyncTextReader__Class**)(modloader::win::memory::resolve_rva(0x04709188));
            }
            return cache;
        }
        inline app::TextReader_SyncTextReader__Class* get_class() {
            return il2cpp::get_nested_class<app::TextReader_SyncTextReader__Class>(type_info(), "System.IO", "TextReader", "SyncTextReader");
        }
        inline app::TextReader_SyncTextReader* create() {
            return il2cpp::create_object<app::TextReader_SyncTextReader>(get_class());
        }
    } // namespace TextReader_SyncTextReader
} // namespace app::classes::types
