#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PocoJsonSerializerStrategy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PocoJsonSerializerStrategy__Class** type_info;
        inline app::PocoJsonSerializerStrategy__Class* get_class() {
            return il2cpp::get_class<app::PocoJsonSerializerStrategy__Class>(type_info, "PlayFab.Json", "PocoJsonSerializerStrategy");
        }
        inline app::PocoJsonSerializerStrategy* create() {
            return il2cpp::create_object<app::PocoJsonSerializerStrategy>(get_class());
        }
    } // namespace PocoJsonSerializerStrategy
} // namespace app::classes::types
