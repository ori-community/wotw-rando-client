#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodInfo_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodInfo_1__Class** type_info;
        inline app::MethodInfo_1__Class* get_class() {
            return il2cpp::get_class<app::MethodInfo_1__Class>(type_info, "System.Reflection", "MethodInfo");
        }
        inline app::MethodInfo_1* create() {
            return il2cpp::create_object<app::MethodInfo_1>(get_class());
        }
        inline app::MethodInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::MethodInfo_1__Array>(get_class(), size);
        }
    } // namespace MethodInfo_1
} // namespace app::classes::types
