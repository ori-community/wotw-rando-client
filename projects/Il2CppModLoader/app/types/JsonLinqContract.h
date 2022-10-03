#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonLinqContract {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonLinqContract__Class** type_info;
        inline app::JsonLinqContract__Class* get_class() {
            return il2cpp::get_class<app::JsonLinqContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonLinqContract");
        }
        inline app::JsonLinqContract* create() {
            return il2cpp::create_object<app::JsonLinqContract>(get_class());
        }
    } // namespace JsonLinqContract
} // namespace app::classes::types
