#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StringWriter__Class.h>
#include <Modloader/app/structs/StringWriter.h>

namespace app::classes::types {
    namespace StringWriter {
        inline app::StringWriter__Class** type_info = (app::StringWriter__Class**)(modloader::win::memory::resolve_rva(0x04783858));
        inline app::StringWriter__Class* get_class() {
            return il2cpp::get_class<app::StringWriter__Class>(type_info, "System.IO", "StringWriter");
        }
        inline app::StringWriter* create() {
            return il2cpp::create_object<app::StringWriter>(get_class());
        }
    } // namespace StringWriter
} // namespace app::classes::types
