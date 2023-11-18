#pragma once
#include <Modloader/app/structs/JsonSerializerInternalReader.h>
#include <Modloader/app/structs/JsonSerializerInternalReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader {
        inline app::JsonSerializerInternalReader__Class** type_info() {
            static app::JsonSerializerInternalReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonSerializerInternalReader__Class**)(modloader::win::memory::resolve_rva(0x0476B8A0));
            }
            return cache;
        }
        inline app::JsonSerializerInternalReader__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerInternalReader__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader");
        }
        inline app::JsonSerializerInternalReader* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader>(get_class());
        }
    } // namespace JsonSerializerInternalReader
} // namespace app::classes::types
