#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISerializationBinder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISerializationBinder__Class** type_info;
        inline app::ISerializationBinder__Class* get_class() {
            return il2cpp::get_class<app::ISerializationBinder__Class>(type_info, "Newtonsoft.Json.Serialization", "ISerializationBinder");
        }
        inline app::ISerializationBinder* create() {
            return il2cpp::create_object<app::ISerializationBinder>(get_class());
        }
    } // namespace ISerializationBinder
} // namespace app::classes::types
