#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryReader__Class** type_info;
        inline app::BinaryReader__Class* get_class() {
            return il2cpp::get_class<app::BinaryReader__Class>(type_info, "System.IO", "BinaryReader");
        }
        inline app::BinaryReader* create() {
            return il2cpp::create_object<app::BinaryReader>(get_class());
        }
    } // namespace BinaryReader
} // namespace app::classes::types
