#pragma once
#include <Modloader/app/structs/BsonString.h>
#include <Modloader/app/structs/BsonString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonString {
        inline app::BsonString__Class** type_info() {
            static app::BsonString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BsonString__Class**)(modloader::win::memory::resolve_rva(0x0470E7F0));
            }
            return cache;
        }
        inline app::BsonString__Class* get_class() {
            return il2cpp::get_class<app::BsonString__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonString");
        }
        inline app::BsonString* create() {
            return il2cpp::create_object<app::BsonString>(get_class());
        }
    } // namespace BsonString
} // namespace app::classes::types
