#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicMethod {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicMethod__Class** type_info;
        inline app::DynamicMethod__Class* get_class() {
            return il2cpp::get_class<app::DynamicMethod__Class>(type_info, "System.Reflection.Emit", "DynamicMethod");
        }
        inline app::DynamicMethod* create() {
            return il2cpp::create_object<app::DynamicMethod>(get_class());
        }
    } // namespace DynamicMethod
} // namespace app::classes::types
