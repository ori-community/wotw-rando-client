#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetParameterCountException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TargetParameterCountException__Class** type_info;
        inline app::TargetParameterCountException__Class* get_class() {
            return il2cpp::get_class<app::TargetParameterCountException__Class>(type_info, "System.Reflection", "TargetParameterCountException");
        }
        inline app::TargetParameterCountException* create() {
            return il2cpp::create_object<app::TargetParameterCountException>(get_class());
        }
    } // namespace TargetParameterCountException
} // namespace app::classes::types
