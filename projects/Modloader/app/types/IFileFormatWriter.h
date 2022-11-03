#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFileFormatWriter {
        inline app::IFileFormatWriter__Class** type_info = (app::IFileFormatWriter__Class**)(modloader::win::memory::resolve_rva(0x04754C58));
        inline app::IFileFormatWriter__Class* get_class() {
            return il2cpp::get_class<app::IFileFormatWriter__Class>(type_info, "Unity.IO.Compression", "IFileFormatWriter");
        }
    } // namespace IFileFormatWriter
} // namespace app::classes::types
