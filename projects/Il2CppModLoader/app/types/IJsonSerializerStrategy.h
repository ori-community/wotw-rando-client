#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IJsonSerializerStrategy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IJsonSerializerStrategy__Class** type_info;
        inline app::IJsonSerializerStrategy__Class* get_class() {
            return il2cpp::get_class<app::IJsonSerializerStrategy__Class>(type_info, "PlayFab.Json", "IJsonSerializerStrategy");
        }
        inline app::IJsonSerializerStrategy* create() {
            return il2cpp::create_object<app::IJsonSerializerStrategy>(get_class());
        }
    } // namespace IJsonSerializerStrategy
} // namespace app::classes::types
