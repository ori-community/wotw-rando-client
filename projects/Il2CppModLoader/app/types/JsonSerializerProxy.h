#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonSerializerProxy__Class** type_info;
        inline app::JsonSerializerProxy__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerProxy__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerProxy");
        }
        inline app::JsonSerializerProxy* create() {
            return il2cpp::create_object<app::JsonSerializerProxy>(get_class());
        }
    } // namespace JsonSerializerProxy
} // namespace app::classes::types
