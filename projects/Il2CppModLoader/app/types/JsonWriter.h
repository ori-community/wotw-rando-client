#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonWriter {
        inline app::JsonWriter__Class** type_info = (app::JsonWriter__Class**)(modloader::win::memory::resolve_rva(0x04743CC0));
        inline app::JsonWriter__Class* get_class() {
            return il2cpp::get_class<app::JsonWriter__Class>(type_info, "Newtonsoft.Json", "JsonWriter");
        }
        inline app::JsonWriter* create() {
            return il2cpp::create_object<app::JsonWriter>(get_class());
        }
    } // namespace JsonWriter
} // namespace app::classes::types
