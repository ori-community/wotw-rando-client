#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonDictionaryAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonDictionaryAttribute__Class** type_info;
        inline app::JsonDictionaryAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonDictionaryAttribute__Class>(type_info, "Newtonsoft.Json", "JsonDictionaryAttribute");
        }
        inline app::JsonDictionaryAttribute* create() {
            return il2cpp::create_object<app::JsonDictionaryAttribute>(get_class());
        }
    } // namespace JsonDictionaryAttribute
} // namespace app::classes::types
