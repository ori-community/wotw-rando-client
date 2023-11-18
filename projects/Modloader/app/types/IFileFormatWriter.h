#pragma once
#include <Modloader/app/structs/IFileFormatWriter.h>
#include <Modloader/app/structs/IFileFormatWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFileFormatWriter {
        inline app::IFileFormatWriter__Class** type_info() {
            static app::IFileFormatWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFileFormatWriter__Class**)(modloader::win::memory::resolve_rva(0x04754C58));
            }
            return cache;
        }
        inline app::IFileFormatWriter__Class* get_class() {
            return il2cpp::get_class<app::IFileFormatWriter__Class>(type_info(), "Unity.IO.Compression", "IFileFormatWriter");
        }
    } // namespace IFileFormatWriter
} // namespace app::classes::types
