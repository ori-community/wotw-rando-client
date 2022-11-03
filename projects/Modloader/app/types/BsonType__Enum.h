#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonType__Enum {
        inline app::BsonType__Enum__Class** type_info = (app::BsonType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478ACB0));
        inline app::BsonType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BsonType__Enum__Class>(type_info, "Newtonsoft.Json.Bson", "BsonType");
        }
        inline app::BsonType__Enum* create() {
            return il2cpp::create_object<app::BsonType__Enum>(get_class());
        }
    } // namespace BsonType__Enum
} // namespace app::classes::types
