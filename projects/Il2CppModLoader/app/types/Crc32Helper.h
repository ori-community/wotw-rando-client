#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Crc32Helper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Crc32Helper__Class** type_info;
        inline app::Crc32Helper__Class* get_class() {
            return il2cpp::get_class<app::Crc32Helper__Class>(type_info, "Unity.IO.Compression", "Crc32Helper");
        }
        inline app::Crc32Helper* create() {
            return il2cpp::create_object<app::Crc32Helper>(get_class());
        }
    } // namespace Crc32Helper
} // namespace app::classes::types
