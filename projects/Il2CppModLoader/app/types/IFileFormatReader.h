#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFileFormatReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFileFormatReader__Class** type_info;
        inline app::IFileFormatReader__Class* get_class() {
            return il2cpp::get_class<app::IFileFormatReader__Class>(type_info, "Unity.IO.Compression", "IFileFormatReader");
        }
    } // namespace IFileFormatReader
} // namespace app::classes::types
