#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryWriter__Class** type_info;
        inline app::BinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::BinaryWriter__Class>(type_info, "System.IO", "BinaryWriter");
        }
        inline app::BinaryWriter* create() {
            return il2cpp::create_object<app::BinaryWriter>(get_class());
        }
    } // namespace BinaryWriter
} // namespace app::classes::types
