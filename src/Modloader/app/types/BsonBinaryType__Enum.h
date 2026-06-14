#pragma once
#include <Modloader/app/structs/BsonBinaryType__Enum.h>
#include <Modloader/app/structs/BsonBinaryType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonBinaryType__Enum {
        inline app::BsonBinaryType__Enum__Class** type_info() {
            static app::BsonBinaryType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BsonBinaryType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BsonBinaryType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BsonBinaryType__Enum__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonBinaryType");
        }
        inline app::BsonBinaryType__Enum* create() {
            return il2cpp::create_object<app::BsonBinaryType__Enum>(get_class());
        }
    } // namespace BsonBinaryType__Enum
} // namespace app::classes::types
