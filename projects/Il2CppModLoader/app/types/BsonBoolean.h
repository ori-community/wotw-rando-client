#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonBoolean {
        inline app::BsonBoolean__Class** type_info = (app::BsonBoolean__Class**)(modloader::win::memory::resolve_rva(0x04759940));
        inline app::BsonBoolean__Class* get_class() {
            return il2cpp::get_class<app::BsonBoolean__Class>(type_info, "Newtonsoft.Json.Bson", "BsonBoolean");
        }
        inline app::BsonBoolean* create() {
            return il2cpp::create_object<app::BsonBoolean>(get_class());
        }
    } // namespace BsonBoolean
} // namespace app::classes::types
