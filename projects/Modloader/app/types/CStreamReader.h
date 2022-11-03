#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CStreamReader {
        inline app::CStreamReader__Class** type_info = (app::CStreamReader__Class**)(modloader::win::memory::resolve_rva(0x04775CD0));
        inline app::CStreamReader__Class* get_class() {
            return il2cpp::get_class<app::CStreamReader__Class>(type_info, "System.IO", "CStreamReader");
        }
        inline app::CStreamReader* create() {
            return il2cpp::create_object<app::CStreamReader>(get_class());
        }
    } // namespace CStreamReader
} // namespace app::classes::types
