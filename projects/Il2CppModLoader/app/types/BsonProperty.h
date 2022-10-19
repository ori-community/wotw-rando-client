#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonProperty {
        inline app::BsonProperty__Class** type_info = (app::BsonProperty__Class**)(modloader::win::memory::resolve_rva(0x0472C2D0));
        inline app::BsonProperty__Class* get_class() {
            return il2cpp::get_class<app::BsonProperty__Class>(type_info, "Newtonsoft.Json.Bson", "BsonProperty");
        }
        inline app::BsonProperty* create() {
            return il2cpp::create_object<app::BsonProperty>(get_class());
        }
        inline app::BsonProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::BsonProperty__Array>(get_class(), size);
        }
        inline app::BsonProperty__Array* create_array(const std::vector<app::BsonProperty*>& items) {
            return il2cpp::array_new<app::BsonProperty__Array>(get_class(), items);
        }
    } // namespace BsonProperty
} // namespace app::classes::types
