#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFileFormatWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFileFormatWriter__Class** type_info;
        inline app::IFileFormatWriter__Class* get_class() {
            return il2cpp::get_class<app::IFileFormatWriter__Class>(type_info, "Unity.IO.Compression", "IFileFormatWriter");
        }
        inline app::IFileFormatWriter* create() {
            return il2cpp::create_object<app::IFileFormatWriter>(get_class());
        }
    } // namespace IFileFormatWriter
} // namespace app::classes::types
