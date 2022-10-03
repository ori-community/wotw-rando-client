#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonWriter__Class** type_info;
        inline app::JsonWriter__Class* get_class() {
            return il2cpp::get_class<app::JsonWriter__Class>(type_info, "Newtonsoft.Json", "JsonWriter");
        }
        inline app::JsonWriter* create() {
            return il2cpp::create_object<app::JsonWriter>(get_class());
        }
    } // namespace JsonWriter
} // namespace app::classes::types
