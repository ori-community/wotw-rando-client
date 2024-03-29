#pragma once
#include <Modloader/app/structs/TextWriter_NullTextWriter.h>
#include <Modloader/app/structs/TextWriter_NullTextWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextWriter_NullTextWriter {
        inline app::TextWriter_NullTextWriter__Class** type_info() {
            static app::TextWriter_NullTextWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextWriter_NullTextWriter__Class**)(modloader::win::memory::resolve_rva(0x047134E8));
            }
            return cache;
        }
        inline app::TextWriter_NullTextWriter__Class* get_class() {
            return il2cpp::get_nested_class<app::TextWriter_NullTextWriter__Class>(type_info(), "System.IO", "TextWriter", "NullTextWriter");
        }
        inline app::TextWriter_NullTextWriter* create() {
            return il2cpp::create_object<app::TextWriter_NullTextWriter>(get_class());
        }
    } // namespace TextWriter_NullTextWriter
} // namespace app::classes::types
