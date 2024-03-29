#pragma once
#include <Modloader/app/structs/JsonSerializerInternalReader_c.h>
#include <Modloader/app/structs/JsonSerializerInternalReader_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader_c {
        inline app::JsonSerializerInternalReader_c__Class** type_info() {
            static app::JsonSerializerInternalReader_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonSerializerInternalReader_c__Class**)(modloader::win::memory::resolve_rva(0x04783768));
            }
            return cache;
        }
        inline app::JsonSerializerInternalReader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonSerializerInternalReader_c__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader", "<>c");
        }
        inline app::JsonSerializerInternalReader_c* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader_c>(get_class());
        }
    } // namespace JsonSerializerInternalReader_c
} // namespace app::classes::types
