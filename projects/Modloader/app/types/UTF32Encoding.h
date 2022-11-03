#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UTF32Encoding {
        inline app::UTF32Encoding__Class** type_info = (app::UTF32Encoding__Class**)(modloader::win::memory::resolve_rva(0x04788858));
        inline app::UTF32Encoding__Class* get_class() {
            return il2cpp::get_class<app::UTF32Encoding__Class>(type_info, "System.Text", "UTF32Encoding");
        }
        inline app::UTF32Encoding* create() {
            return il2cpp::create_object<app::UTF32Encoding>(get_class());
        }
    } // namespace UTF32Encoding
} // namespace app::classes::types
