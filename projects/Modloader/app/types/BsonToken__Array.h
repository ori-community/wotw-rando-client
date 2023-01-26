#pragma once
#include <Modloader/app/structs/BsonToken__Array.h>
#include <Modloader/app/structs/BsonToken__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonToken__Array {
        inline app::BsonToken__Array__Class** type_info() {
            static app::BsonToken__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BsonToken__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BsonToken__Array__Class* get_class() {
            return il2cpp::get_class<app::BsonToken__Array__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonToken[]");
        }
        inline app::BsonToken__Array* create() {
            return il2cpp::create_object<app::BsonToken__Array>(get_class());
        }
    } // namespace BsonToken__Array
} // namespace app::classes::types
