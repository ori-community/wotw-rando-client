#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextWriter {
        inline app::TextWriter__Class** type_info = (app::TextWriter__Class**)(modloader::win::memory::resolve_rva(0x04721A48));
        inline app::TextWriter__Class* get_class() {
            return il2cpp::get_class<app::TextWriter__Class>(type_info, "System.IO", "TextWriter");
        }
        inline app::TextWriter* create() {
            return il2cpp::create_object<app::TextWriter>(get_class());
        }
    } // namespace TextWriter
} // namespace app::classes::types
