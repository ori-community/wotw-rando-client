#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonProperty {
        inline app::JsonProperty__Class** type_info = (app::JsonProperty__Class**)(modloader::win::memory::resolve_rva(0x047065B8));
        inline app::JsonProperty__Class* get_class() {
            return il2cpp::get_class<app::JsonProperty__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonProperty");
        }
        inline app::JsonProperty* create() {
            return il2cpp::create_object<app::JsonProperty>(get_class());
        }
        inline app::JsonProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonProperty__Array>(get_class(), size);
        }
        inline app::JsonProperty__Array* create_array(const std::vector<app::JsonProperty*>& items) {
            return il2cpp::array_new<app::JsonProperty__Array>(get_class(), items);
        }
    } // namespace JsonProperty
} // namespace app::classes::types
