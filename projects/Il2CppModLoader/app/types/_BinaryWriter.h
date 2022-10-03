#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _BinaryWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::_BinaryWriter__Class** type_info;
        inline app::_BinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::_BinaryWriter__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter");
        }
        inline app::_BinaryWriter* create() {
            return il2cpp::create_object<app::_BinaryWriter>(get_class());
        }
    } // namespace _BinaryWriter
} // namespace app::classes::types
