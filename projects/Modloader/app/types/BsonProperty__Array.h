#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonProperty__Array {
        namespace {
            inline app::BsonProperty__Array__Class* type_info_ref = nullptr;
        }
        inline app::BsonProperty__Array__Class** type_info = &type_info_ref;
        inline app::BsonProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::BsonProperty__Array__Class>(type_info, "Newtonsoft.Json.Bson", "BsonProperty[]");
        }
        inline app::BsonProperty__Array* create() {
            return il2cpp::create_object<app::BsonProperty__Array>(get_class());
        }
    } // namespace BsonProperty__Array
} // namespace app::classes::types
