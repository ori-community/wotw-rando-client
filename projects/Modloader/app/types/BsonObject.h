#pragma once
#include <Modloader/app/structs/BsonObject.h>
#include <Modloader/app/structs/BsonObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonObject {
        inline app::BsonObject__Class** type_info() {
            static app::BsonObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BsonObject__Class**)(modloader::win::memory::resolve_rva(0x04749758));
            }
            return cache;
        }
        inline app::BsonObject__Class* get_class() {
            return il2cpp::get_class<app::BsonObject__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonObject");
        }
        inline app::BsonObject* create() {
            return il2cpp::create_object<app::BsonObject>(get_class());
        }
    } // namespace BsonObject
} // namespace app::classes::types
