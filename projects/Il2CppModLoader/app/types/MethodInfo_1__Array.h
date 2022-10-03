#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodInfo_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodInfo_1__Array__Class** type_info;
        inline app::MethodInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::MethodInfo_1__Array__Class>(type_info, "System.Reflection", "MethodInfo[]");
        }
        inline app::MethodInfo_1__Array* create() {
            return il2cpp::create_object<app::MethodInfo_1__Array>(get_class());
        }
    } // namespace MethodInfo_1__Array
} // namespace app::classes::types
