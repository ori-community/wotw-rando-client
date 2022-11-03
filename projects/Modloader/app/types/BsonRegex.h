#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonRegex {
        inline app::BsonRegex__Class** type_info = (app::BsonRegex__Class**)(modloader::win::memory::resolve_rva(0x0472C4D8));
        inline app::BsonRegex__Class* get_class() {
            return il2cpp::get_class<app::BsonRegex__Class>(type_info, "Newtonsoft.Json.Bson", "BsonRegex");
        }
        inline app::BsonRegex* create() {
            return il2cpp::create_object<app::BsonRegex>(get_class());
        }
    } // namespace BsonRegex
} // namespace app::classes::types
