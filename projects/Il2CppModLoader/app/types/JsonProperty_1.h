#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonProperty_1 {
        inline app::JsonProperty_1__Class** type_info = (app::JsonProperty_1__Class**)(modloader::win::memory::resolve_rva(0x04793FB8));
        inline app::JsonProperty_1__Class* get_class() {
            return il2cpp::get_class<app::JsonProperty_1__Class>(type_info, "PlayFab.Json", "JsonProperty");
        }
        inline app::JsonProperty_1* create() {
            return il2cpp::create_object<app::JsonProperty_1>(get_class());
        }
    } // namespace JsonProperty_1
} // namespace app::classes::types
