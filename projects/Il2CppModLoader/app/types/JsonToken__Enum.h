#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonToken__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonToken__Enum__Class** type_info;
        inline app::JsonToken__Enum__Class* get_class() {
            return il2cpp::get_class<app::JsonToken__Enum__Class>(type_info, "Moon", "JsonToken");
        }
        inline app::JsonToken__Enum* create() {
            return il2cpp::create_object<app::JsonToken__Enum>(get_class());
        }
    } // namespace JsonToken__Enum
} // namespace app::classes::types
