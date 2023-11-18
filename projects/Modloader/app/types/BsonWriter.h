#pragma once
#include <Modloader/app/structs/BsonWriter.h>
#include <Modloader/app/structs/BsonWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonWriter {
        inline app::BsonWriter__Class** type_info() {
            static app::BsonWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BsonWriter__Class**)(modloader::win::memory::resolve_rva(0x047888C0));
            }
            return cache;
        }
        inline app::BsonWriter__Class* get_class() {
            return il2cpp::get_class<app::BsonWriter__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonWriter");
        }
        inline app::BsonWriter* create() {
            return il2cpp::create_object<app::BsonWriter>(get_class());
        }
    } // namespace BsonWriter
} // namespace app::classes::types
