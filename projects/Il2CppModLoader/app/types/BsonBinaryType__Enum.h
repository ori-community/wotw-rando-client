#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonBinaryType__Enum {
        namespace {
            inline app::BsonBinaryType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BsonBinaryType__Enum__Class** type_info = &type_info_ref;
        inline app::BsonBinaryType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BsonBinaryType__Enum__Class>(type_info, "Newtonsoft.Json.Bson", "BsonBinaryType");
        }
        inline app::BsonBinaryType__Enum* create() {
            return il2cpp::create_object<app::BsonBinaryType__Enum>(get_class());
        }
    } // namespace BsonBinaryType__Enum
} // namespace app::classes::types
