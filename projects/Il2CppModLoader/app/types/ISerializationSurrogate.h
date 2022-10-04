#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISerializationSurrogate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISerializationSurrogate__Class** type_info;
        inline app::ISerializationSurrogate__Class* get_class() {
            return il2cpp::get_class<app::ISerializationSurrogate__Class>(type_info, "System.Runtime.Serialization", "ISerializationSurrogate");
        }
    } // namespace ISerializationSurrogate
} // namespace app::classes::types
