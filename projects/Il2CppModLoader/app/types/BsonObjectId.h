#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonObjectId {
        inline app::BsonObjectId__Class** type_info = (app::BsonObjectId__Class**)(modloader::win::memory::resolve_rva(0x04792638));
        inline app::BsonObjectId__Class* get_class() {
            return il2cpp::get_class<app::BsonObjectId__Class>(type_info, "Newtonsoft.Json.Bson", "BsonObjectId");
        }
        inline app::BsonObjectId* create() {
            return il2cpp::create_object<app::BsonObjectId>(get_class());
        }
    } // namespace BsonObjectId
} // namespace app::classes::types
