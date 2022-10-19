#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonToken__Enum {
        inline app::JsonToken__Enum__Class** type_info = (app::JsonToken__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471E728));
        inline app::JsonToken__Enum__Class* get_class() {
            return il2cpp::get_class<app::JsonToken__Enum__Class>(type_info, "Moon", "JsonToken");
        }
        inline app::JsonToken__Enum* create() {
            return il2cpp::create_object<app::JsonToken__Enum>(get_class());
        }
    } // namespace JsonToken__Enum
} // namespace app::classes::types
