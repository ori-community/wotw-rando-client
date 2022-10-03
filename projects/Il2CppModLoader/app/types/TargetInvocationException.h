#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetInvocationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TargetInvocationException__Class** type_info;
        inline app::TargetInvocationException__Class* get_class() {
            return il2cpp::get_class<app::TargetInvocationException__Class>(type_info, "System.Reflection", "TargetInvocationException");
        }
        inline app::TargetInvocationException* create() {
            return il2cpp::create_object<app::TargetInvocationException>(get_class());
        }
    } // namespace TargetInvocationException
} // namespace app::classes::types
