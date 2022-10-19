#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonTypeReflector_c {
        inline app::JsonTypeReflector_c__Class** type_info = (app::JsonTypeReflector_c__Class**)(modloader::win::memory::resolve_rva(0x0474A468));
        inline app::JsonTypeReflector_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonTypeReflector_c__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonTypeReflector", "<>c");
        }
        inline app::JsonTypeReflector_c* create() {
            return il2cpp::create_object<app::JsonTypeReflector_c>(get_class());
        }
    } // namespace JsonTypeReflector_c
} // namespace app::classes::types
