#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonToken__Array {
        namespace {
            app::BsonToken__Array__Class* type_info_ref = nullptr;
        }
        app::BsonToken__Array__Class** type_info = &type_info_ref;
        inline app::BsonToken__Array__Class* get_class() {
            return il2cpp::get_class<app::BsonToken__Array__Class>(type_info, "Newtonsoft.Json.Bson", "BsonToken[]");
        }
        inline app::BsonToken__Array* create() {
            return il2cpp::create_object<app::BsonToken__Array>(get_class());
        }
    } // namespace BsonToken__Array
} // namespace app::classes::types
