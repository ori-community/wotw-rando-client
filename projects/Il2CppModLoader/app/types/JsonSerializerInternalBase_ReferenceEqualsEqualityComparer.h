#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalBase_ReferenceEqualsEqualityComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class** type_info;
        inline app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase", "ReferenceEqualsEqualityComparer");
        }
        inline app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer* create() {
            return il2cpp::create_object<app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer>(get_class());
        }
    } // namespace JsonSerializerInternalBase_ReferenceEqualsEqualityComparer
} // namespace app::classes::types
