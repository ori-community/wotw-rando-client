#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonSerializerSettings {
        inline app::JsonSerializerSettings__Class** type_info = (app::JsonSerializerSettings__Class**)(modloader::win::memory::resolve_rva(0x04717918));
        inline app::JsonSerializerSettings__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerSettings__Class>(type_info, "Newtonsoft.Json", "JsonSerializerSettings");
        }
        inline app::JsonSerializerSettings* create() {
            return il2cpp::create_object<app::JsonSerializerSettings>(get_class());
        }
    } // namespace JsonSerializerSettings
} // namespace app::classes::types
