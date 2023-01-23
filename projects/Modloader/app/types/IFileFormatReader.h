#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IFileFormatReader__Class.h>

namespace app::classes::types {
    namespace IFileFormatReader {
        inline app::IFileFormatReader__Class** type_info = (app::IFileFormatReader__Class**)(modloader::win::memory::resolve_rva(0x047279F8));
        inline app::IFileFormatReader__Class* get_class() {
            return il2cpp::get_class<app::IFileFormatReader__Class>(type_info, "Unity.IO.Compression", "IFileFormatReader");
        }
    } // namespace IFileFormatReader
} // namespace app::classes::types
