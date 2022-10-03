#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EtwSession__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EtwSession__Array__Class** type_info;
        inline app::EtwSession__Array__Class* get_class() {
            return il2cpp::get_class<app::EtwSession__Array__Class>(type_info, "System.Diagnostics.Tracing", "EtwSession[]");
        }
        inline app::EtwSession__Array* create() {
            return il2cpp::create_object<app::EtwSession__Array>(get_class());
        }
    } // namespace EtwSession__Array
} // namespace app::classes::types
