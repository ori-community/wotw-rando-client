#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISerializable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISerializable__Class** type_info;
        inline app::ISerializable__Class* get_class() {
            return il2cpp::get_class<app::ISerializable__Class>(type_info, "System.Runtime.Serialization", "ISerializable");
        }
    } // namespace ISerializable
} // namespace app::classes::types
