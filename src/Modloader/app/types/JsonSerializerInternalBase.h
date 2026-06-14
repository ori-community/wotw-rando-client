#pragma once
#include <Modloader/app/structs/JsonSerializerInternalBase.h>
#include <Modloader/app/structs/JsonSerializerInternalBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalBase {
        inline app::JsonSerializerInternalBase__Class** type_info() {
            static app::JsonSerializerInternalBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonSerializerInternalBase__Class**)(modloader::win::memory::resolve_rva(0x047344E0));
            }
            return cache;
        }
        inline app::JsonSerializerInternalBase__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerInternalBase__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase");
        }
        inline app::JsonSerializerInternalBase* create() {
            return il2cpp::create_object<app::JsonSerializerInternalBase>(get_class());
        }
    } // namespace JsonSerializerInternalBase
} // namespace app::classes::types
