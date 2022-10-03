#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonObjectContract {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonObjectContract__Class** type_info;
        inline app::JsonObjectContract__Class* get_class() {
            return il2cpp::get_class<app::JsonObjectContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonObjectContract");
        }
        inline app::JsonObjectContract* create() {
            return il2cpp::create_object<app::JsonObjectContract>(get_class());
        }
    } // namespace JsonObjectContract
} // namespace app::classes::types
