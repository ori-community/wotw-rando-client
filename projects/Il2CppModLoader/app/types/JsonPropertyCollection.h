#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonPropertyCollection {
        inline app::JsonPropertyCollection__Class** type_info = (app::JsonPropertyCollection__Class**)(modloader::win::memory::resolve_rva(0x0473A420));
        inline app::JsonPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::JsonPropertyCollection__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonPropertyCollection");
        }
        inline app::JsonPropertyCollection* create() {
            return il2cpp::create_object<app::JsonPropertyCollection>(get_class());
        }
    } // namespace JsonPropertyCollection
} // namespace app::classes::types
