#pragma once
#include <Modloader/app/structs/IFileFormatReader.h>
#include <Modloader/app/structs/IFileFormatReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFileFormatReader {
        inline app::IFileFormatReader__Class** type_info() {
            static app::IFileFormatReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFileFormatReader__Class**)(modloader::win::memory::resolve_rva(0x047279F8));
            }
            return cache;
        }
        inline app::IFileFormatReader__Class* get_class() {
            return il2cpp::get_class<app::IFileFormatReader__Class>(type_info(), "Unity.IO.Compression", "IFileFormatReader");
        }
    } // namespace IFileFormatReader
} // namespace app::classes::types
