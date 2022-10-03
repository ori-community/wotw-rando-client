#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoParameterInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoParameterInfo__Class** type_info;
        inline app::MonoParameterInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoParameterInfo__Class>(type_info, "System.Reflection", "MonoParameterInfo");
        }
        inline app::MonoParameterInfo* create() {
            return il2cpp::create_object<app::MonoParameterInfo>(get_class());
        }
    } // namespace MonoParameterInfo
} // namespace app::classes::types
