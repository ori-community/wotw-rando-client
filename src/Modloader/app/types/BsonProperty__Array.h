#pragma once
#include <Modloader/app/structs/BsonProperty__Array.h>
#include <Modloader/app/structs/BsonProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonProperty__Array {
        inline app::BsonProperty__Array__Class** type_info() {
            static app::BsonProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BsonProperty__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BsonProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::BsonProperty__Array__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonProperty[]");
        }
        inline app::BsonProperty__Array* create() {
            return il2cpp::create_object<app::BsonProperty__Array>(get_class());
        }
    } // namespace BsonProperty__Array
} // namespace app::classes::types
