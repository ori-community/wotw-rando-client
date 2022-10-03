#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonPrimitiveContract {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonPrimitiveContract__Class** type_info;
        inline app::JsonPrimitiveContract__Class* get_class() {
            return il2cpp::get_class<app::JsonPrimitiveContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonPrimitiveContract");
        }
        inline app::JsonPrimitiveContract* create() {
            return il2cpp::create_object<app::JsonPrimitiveContract>(get_class());
        }
    } // namespace JsonPrimitiveContract
} // namespace app::classes::types
