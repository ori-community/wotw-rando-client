#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BsonProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BsonProperty__Class** type_info;
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
