#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StreamReader {
        inline app::StreamReader__Class** type_info = (app::StreamReader__Class**)(modloader::win::memory::resolve_rva(0x04763F40));
        inline app::StreamReader__Class* get_class() {
            return il2cpp::get_class<app::StreamReader__Class>(type_info, "System.IO", "StreamReader");
        }
        inline app::StreamReader* create() {
            return il2cpp::create_object<app::StreamReader>(get_class());
        }
    } // namespace StreamReader
} // namespace app::classes::types
