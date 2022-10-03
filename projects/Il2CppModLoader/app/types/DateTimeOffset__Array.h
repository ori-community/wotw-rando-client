#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeOffset__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeOffset__Array__Class** type_info;
        inline app::DateTimeOffset__Array__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffset__Array__Class>(type_info, "System", "DateTimeOffset[]");
        }
        inline app::DateTimeOffset__Array* create() {
            return il2cpp::create_object<app::DateTimeOffset__Array>(get_class());
        }
    } // namespace DateTimeOffset__Array
} // namespace app::classes::types
