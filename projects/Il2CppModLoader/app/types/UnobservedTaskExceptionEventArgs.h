#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnobservedTaskExceptionEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnobservedTaskExceptionEventArgs__Class** type_info;
        inline app::UnobservedTaskExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UnobservedTaskExceptionEventArgs__Class>(type_info, "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs");
        }
        inline app::UnobservedTaskExceptionEventArgs* create() {
            return il2cpp::create_object<app::UnobservedTaskExceptionEventArgs>(get_class());
        }
    } // namespace UnobservedTaskExceptionEventArgs
} // namespace app::classes::types
