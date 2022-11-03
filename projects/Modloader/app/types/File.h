#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace File {
        inline app::File__Class** type_info = (app::File__Class**)(modloader::win::memory::resolve_rva(0x04738460));
        inline app::File__Class* get_class() {
            return il2cpp::get_class<app::File__Class>(type_info, "System.IO", "File");
        }
        inline app::File* create() {
            return il2cpp::create_object<app::File>(get_class());
        }
    } // namespace File
} // namespace app::classes::types
