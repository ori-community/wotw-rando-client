#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonConverter__Class** type_info;
        inline app::JsonConverter__Class* get_class() {
            return il2cpp::get_class<app::JsonConverter__Class>(type_info, "Newtonsoft.Json", "JsonConverter");
        }
        inline app::JsonConverter* create() {
            return il2cpp::create_object<app::JsonConverter>(get_class());
        }
        inline app::JsonConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonConverter__Array>(get_class(), size);
        }
        inline app::JsonConverter__Array* create_array(const std::vector<app::JsonConverter*>& items) {
            return il2cpp::array_new<app::JsonConverter__Array>(get_class(), items);
        }
    } // namespace JsonConverter
} // namespace app::classes::types
