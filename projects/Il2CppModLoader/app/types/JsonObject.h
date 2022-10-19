#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonObject {
        inline app::JsonObject__Class** type_info = (app::JsonObject__Class**)(modloader::win::memory::resolve_rva(0x04771490));
        inline app::JsonObject__Class* get_class() {
            return il2cpp::get_class<app::JsonObject__Class>(type_info, "PlayFab.Json", "JsonObject");
        }
        inline app::JsonObject* create() {
            return il2cpp::create_object<app::JsonObject>(get_class());
        }
    } // namespace JsonObject
} // namespace app::classes::types
