#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonString {
        inline app::BsonString__Class** type_info = (app::BsonString__Class**)(modloader::win::memory::resolve_rva(0x0470E7F0));
        inline app::BsonString__Class* get_class() {
            return il2cpp::get_class<app::BsonString__Class>(type_info, "Newtonsoft.Json.Bson", "BsonString");
        }
        inline app::BsonString* create() {
            return il2cpp::create_object<app::BsonString>(get_class());
        }
    } // namespace BsonString
} // namespace app::classes::types
