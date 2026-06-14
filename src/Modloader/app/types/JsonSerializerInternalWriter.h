#pragma once
#include <Modloader/app/structs/JsonSerializerInternalWriter.h>
#include <Modloader/app/structs/JsonSerializerInternalWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalWriter {
        inline app::JsonSerializerInternalWriter__Class** type_info() {
            static app::JsonSerializerInternalWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonSerializerInternalWriter__Class**)(modloader::win::memory::resolve_rva(0x04702D68));
            }
            return cache;
        }
        inline app::JsonSerializerInternalWriter__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerInternalWriter__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonSerializerInternalWriter");
        }
        inline app::JsonSerializerInternalWriter* create() {
            return il2cpp::create_object<app::JsonSerializerInternalWriter>(get_class());
        }
    } // namespace JsonSerializerInternalWriter
} // namespace app::classes::types
