#pragma once
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/TextWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextWriter {
        inline app::TextWriter__Class** type_info() {
            static app::TextWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextWriter__Class**)(modloader::win::memory::resolve_rva(0x04721A48));
            }
            return cache;
        }
        inline app::TextWriter__Class* get_class() {
            return il2cpp::get_class<app::TextWriter__Class>(type_info(), "System.IO", "TextWriter");
        }
        inline app::TextWriter* create() {
            return il2cpp::create_object<app::TextWriter>(get_class());
        }
    } // namespace TextWriter
} // namespace app::classes::types
