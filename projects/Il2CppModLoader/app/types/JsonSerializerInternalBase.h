#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonSerializerInternalBase__Class** type_info;
        inline app::JsonSerializerInternalBase__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerInternalBase__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase");
        }
        inline app::JsonSerializerInternalBase* create() {
            return il2cpp::create_object<app::JsonSerializerInternalBase>(get_class());
        }
    } // namespace JsonSerializerInternalBase
} // namespace app::classes::types
