#pragma once
#include <Modloader/app/structs/TextWriter_SyncTextWriter.h>
#include <Modloader/app/structs/TextWriter_SyncTextWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextWriter_SyncTextWriter {
        inline app::TextWriter_SyncTextWriter__Class** type_info() {
            static app::TextWriter_SyncTextWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextWriter_SyncTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04713248));
            }
            return cache;
        }
        inline app::TextWriter_SyncTextWriter__Class* get_class() {
            return il2cpp::get_nested_class<app::TextWriter_SyncTextWriter__Class>(type_info(), "System.IO", "TextWriter", "SyncTextWriter");
        }
        inline app::TextWriter_SyncTextWriter* create() {
            return il2cpp::create_object<app::TextWriter_SyncTextWriter>(get_class());
        }
    } // namespace TextWriter_SyncTextWriter
} // namespace app::classes::types
