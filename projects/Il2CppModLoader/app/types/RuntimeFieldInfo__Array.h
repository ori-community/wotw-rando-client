#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeFieldInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeFieldInfo__Array__Class** type_info;
        inline app::RuntimeFieldInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeFieldInfo__Array__Class>(type_info, "System.Reflection", "RuntimeFieldInfo[]");
        }
        inline app::RuntimeFieldInfo__Array* create() {
            return il2cpp::create_object<app::RuntimeFieldInfo__Array>(get_class());
        }
    } // namespace RuntimeFieldInfo__Array
} // namespace app::classes::types
