#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonBinary {
        inline app::BsonBinary__Class** type_info = (app::BsonBinary__Class**)(modloader::win::memory::resolve_rva(0x04716700));
        inline app::BsonBinary__Class* get_class() {
            return il2cpp::get_class<app::BsonBinary__Class>(type_info, "Newtonsoft.Json.Bson", "BsonBinary");
        }
        inline app::BsonBinary* create() {
            return il2cpp::create_object<app::BsonBinary>(get_class());
        }
    } // namespace BsonBinary
} // namespace app::classes::types
