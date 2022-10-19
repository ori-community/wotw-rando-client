#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultSerializationBinder {
        inline app::DefaultSerializationBinder__Class** type_info = (app::DefaultSerializationBinder__Class**)(modloader::win::memory::resolve_rva(0x04780E60));
        inline app::DefaultSerializationBinder__Class* get_class() {
            return il2cpp::get_class<app::DefaultSerializationBinder__Class>(type_info, "Newtonsoft.Json.Serialization", "DefaultSerializationBinder");
        }
        inline app::DefaultSerializationBinder* create() {
            return il2cpp::create_object<app::DefaultSerializationBinder>(get_class());
        }
    } // namespace DefaultSerializationBinder
} // namespace app::classes::types
