#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GZipFormatter {
        inline app::GZipFormatter__Class** type_info = (app::GZipFormatter__Class**)(modloader::win::memory::resolve_rva(0x047971B8));
        inline app::GZipFormatter__Class* get_class() {
            return il2cpp::get_class<app::GZipFormatter__Class>(type_info, "Unity.IO.Compression", "GZipFormatter");
        }
        inline app::GZipFormatter* create() {
            return il2cpp::create_object<app::GZipFormatter>(get_class());
        }
    } // namespace GZipFormatter
} // namespace app::classes::types
