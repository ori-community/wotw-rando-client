#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonArrayContract {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonArrayContract__Class** type_info;
        inline app::JsonArrayContract__Class* get_class() {
            return il2cpp::get_class<app::JsonArrayContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonArrayContract");
        }
        inline app::JsonArrayContract* create() {
            return il2cpp::create_object<app::JsonArrayContract>(get_class());
        }
    } // namespace JsonArrayContract
} // namespace app::classes::types
