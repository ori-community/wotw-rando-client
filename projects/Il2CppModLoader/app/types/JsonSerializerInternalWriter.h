#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonSerializerInternalWriter__Class** type_info;
        inline app::JsonSerializerInternalWriter__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerInternalWriter__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalWriter");
        }
        inline app::JsonSerializerInternalWriter* create() {
            return il2cpp::create_object<app::JsonSerializerInternalWriter>(get_class());
        }
    } // namespace JsonSerializerInternalWriter
} // namespace app::classes::types
