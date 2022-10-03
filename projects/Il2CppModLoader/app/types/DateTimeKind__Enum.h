#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeKind__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeKind__Enum__Class** type_info;
        inline app::DateTimeKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateTimeKind__Enum__Class>(type_info, "System", "DateTimeKind");
        }
        inline app::DateTimeKind__Enum* create() {
            return il2cpp::create_object<app::DateTimeKind__Enum>(get_class());
        }
    } // namespace DateTimeKind__Enum
} // namespace app::classes::types
