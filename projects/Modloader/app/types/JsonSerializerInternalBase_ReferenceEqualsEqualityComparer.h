#pragma once
#include <Modloader/app/structs/JsonSerializerInternalBase_ReferenceEqualsEqualityComparer.h>
#include <Modloader/app/structs/JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalBase_ReferenceEqualsEqualityComparer {
        inline app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class** type_info() {
            static app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04741798));
            }
            return cache;
        }
        inline app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase", "ReferenceEqualsEqualityComparer");
        }
        inline app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer* create() {
            return il2cpp::create_object<app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer>(get_class());
        }
    } // namespace JsonSerializerInternalBase_ReferenceEqualsEqualityComparer
} // namespace app::classes::types
