#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StreamWriter__Class.h>
#include <Modloader/app/structs/StreamWriter.h>

namespace app::classes::types {
    namespace StreamWriter {
        inline app::StreamWriter__Class** type_info = (app::StreamWriter__Class**)(modloader::win::memory::resolve_rva(0x04726F38));
        inline app::StreamWriter__Class* get_class() {
            return il2cpp::get_class<app::StreamWriter__Class>(type_info, "System.IO", "StreamWriter");
        }
        inline app::StreamWriter* create() {
            return il2cpp::create_object<app::StreamWriter>(get_class());
        }
    } // namespace StreamWriter
} // namespace app::classes::types
