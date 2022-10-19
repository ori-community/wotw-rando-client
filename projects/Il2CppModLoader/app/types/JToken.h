#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JToken {
        inline app::JToken__Class** type_info = (app::JToken__Class**)(modloader::win::memory::resolve_rva(0x04761348));
        inline app::JToken__Class* get_class() {
            return il2cpp::get_class<app::JToken__Class>(type_info, "Newtonsoft.Json.Linq", "JToken");
        }
        inline app::JToken* create() {
            return il2cpp::create_object<app::JToken>(get_class());
        }
        inline app::JToken__Array* create_array(int size) {
            return il2cpp::array_new<app::JToken__Array>(get_class(), size);
        }
        inline app::JToken__Array* create_array(const std::vector<app::JToken*>& items) {
            return il2cpp::array_new<app::JToken__Array>(get_class(), items);
        }
    } // namespace JToken
} // namespace app::classes::types
