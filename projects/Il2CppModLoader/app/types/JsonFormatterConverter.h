#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonFormatterConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonFormatterConverter__Class** type_info;
        inline app::JsonFormatterConverter__Class* get_class() {
            return il2cpp::get_class<app::JsonFormatterConverter__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonFormatterConverter");
        }
        inline app::JsonFormatterConverter* create() {
            return il2cpp::create_object<app::JsonFormatterConverter>(get_class());
        }
    } // namespace JsonFormatterConverter
} // namespace app::classes::types
