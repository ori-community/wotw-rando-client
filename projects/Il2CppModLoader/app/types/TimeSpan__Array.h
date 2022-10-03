#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpan__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSpan__Array__Class** type_info;
        inline app::TimeSpan__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeSpan__Array__Class>(type_info, "System", "TimeSpan[]");
        }
        inline app::TimeSpan__Array* create() {
            return il2cpp::create_object<app::TimeSpan__Array>(get_class());
        }
    } // namespace TimeSpan__Array
} // namespace app::classes::types
