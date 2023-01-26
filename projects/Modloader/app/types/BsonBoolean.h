#pragma once
#include <Modloader/app/structs/BsonBoolean.h>
#include <Modloader/app/structs/BsonBoolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonBoolean {
        inline app::BsonBoolean__Class** type_info() {
            static app::BsonBoolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BsonBoolean__Class**)(modloader::win::memory::resolve_rva(0x04759940));
            }
            return cache;
        }
        inline app::BsonBoolean__Class* get_class() {
            return il2cpp::get_class<app::BsonBoolean__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonBoolean");
        }
        inline app::BsonBoolean* create() {
            return il2cpp::create_object<app::BsonBoolean>(get_class());
        }
    } // namespace BsonBoolean
} // namespace app::classes::types
