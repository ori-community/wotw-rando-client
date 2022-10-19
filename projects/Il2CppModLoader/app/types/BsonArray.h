#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonArray {
        inline app::BsonArray__Class** type_info = (app::BsonArray__Class**)(modloader::win::memory::resolve_rva(0x0477B108));
        inline app::BsonArray__Class* get_class() {
            return il2cpp::get_class<app::BsonArray__Class>(type_info, "Newtonsoft.Json.Bson", "BsonArray");
        }
        inline app::BsonArray* create() {
            return il2cpp::create_object<app::BsonArray>(get_class());
        }
    } // namespace BsonArray
} // namespace app::classes::types
