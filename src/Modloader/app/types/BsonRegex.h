#pragma once
#include <Modloader/app/structs/BsonRegex.h>
#include <Modloader/app/structs/BsonRegex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonRegex {
        inline app::BsonRegex__Class** type_info() {
            static app::BsonRegex__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BsonRegex__Class**)(modloader::win::memory::resolve_rva(0x0472C4D8));
            }
            return cache;
        }
        inline app::BsonRegex__Class* get_class() {
            return il2cpp::get_class<app::BsonRegex__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonRegex");
        }
        inline app::BsonRegex* create() {
            return il2cpp::create_object<app::BsonRegex>(get_class());
        }
    } // namespace BsonRegex
} // namespace app::classes::types
