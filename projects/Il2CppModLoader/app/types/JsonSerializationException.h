#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonSerializationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonSerializationException__Class** type_info;
        inline app::JsonSerializationException__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializationException__Class>(type_info, "Newtonsoft.Json", "JsonSerializationException");
        }
        inline app::JsonSerializationException* create() {
            return il2cpp::create_object<app::JsonSerializationException>(get_class());
        }
    } // namespace JsonSerializationException
} // namespace app::classes::types
