#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GZipDecoder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GZipDecoder__Class** type_info;
        inline app::GZipDecoder__Class* get_class() {
            return il2cpp::get_class<app::GZipDecoder__Class>(type_info, "Unity.IO.Compression", "GZipDecoder");
        }
        inline app::GZipDecoder* create() {
            return il2cpp::create_object<app::GZipDecoder>(get_class());
        }
    } // namespace GZipDecoder
} // namespace app::classes::types
