#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonSerializerInternalReader__Class** type_info;
        inline app::JsonSerializerInternalReader__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerInternalReader__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader");
        }
        inline app::JsonSerializerInternalReader* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader>(get_class());
        }
    } // namespace JsonSerializerInternalReader
} // namespace app::classes::types
