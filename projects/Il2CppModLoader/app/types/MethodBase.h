#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodBase__Class** type_info;
        inline app::MethodBase__Class* get_class() {
            return il2cpp::get_class<app::MethodBase__Class>(type_info, "System.Reflection", "MethodBase");
        }
        inline app::MethodBase* create() {
            return il2cpp::create_object<app::MethodBase>(get_class());
        }
        inline app::MethodBase__Array* create_array(int size) {
            return il2cpp::array_new<app::MethodBase__Array>(get_class(), size);
        }
    } // namespace MethodBase
} // namespace app::classes::types
