#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RunWorkerCompletedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RunWorkerCompletedEventArgs__Class** type_info;
        inline app::RunWorkerCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::RunWorkerCompletedEventArgs__Class>(type_info, "System.ComponentModel", "RunWorkerCompletedEventArgs");
        }
        inline app::RunWorkerCompletedEventArgs* create() {
            return il2cpp::create_object<app::RunWorkerCompletedEventArgs>(get_class());
        }
    } // namespace RunWorkerCompletedEventArgs
} // namespace app::classes::types
