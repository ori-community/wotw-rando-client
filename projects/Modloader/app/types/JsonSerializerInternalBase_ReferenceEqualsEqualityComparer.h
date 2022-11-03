#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonSerializerInternalBase_ReferenceEqualsEqualityComparer {
        inline app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class** type_info = (app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04741798));
        inline app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase", "ReferenceEqualsEqualityComparer");
        }
        inline app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer* create() {
            return il2cpp::create_object<app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer>(get_class());
        }
    } // namespace JsonSerializerInternalBase_ReferenceEqualsEqualityComparer
} // namespace app::classes::types
