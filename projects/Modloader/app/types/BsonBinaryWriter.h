#pragma once
#include <Modloader/app/structs/BsonBinaryWriter.h>
#include <Modloader/app/structs/BsonBinaryWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonBinaryWriter {
        inline app::BsonBinaryWriter__Class** type_info() {
            static app::BsonBinaryWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BsonBinaryWriter__Class**)(modloader::win::memory::resolve_rva(0x047766A0));
            }
            return cache;
        }
        inline app::BsonBinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::BsonBinaryWriter__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonBinaryWriter");
        }
        inline app::BsonBinaryWriter* create() {
            return il2cpp::create_object<app::BsonBinaryWriter>(get_class());
        }
    } // namespace BsonBinaryWriter
} // namespace app::classes::types
