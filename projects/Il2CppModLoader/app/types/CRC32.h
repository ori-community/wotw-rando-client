#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CRC32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CRC32__Class** type_info;
        inline app::CRC32__Class* get_class() {
            return il2cpp::get_class<app::CRC32__Class>(type_info, "Ionic.Crc", "CRC32");
        }
        inline app::CRC32* create() {
            return il2cpp::create_object<app::CRC32>(get_class());
        }
    } // namespace CRC32
} // namespace app::classes::types
