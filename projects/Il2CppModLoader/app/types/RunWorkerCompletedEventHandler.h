#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RunWorkerCompletedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RunWorkerCompletedEventHandler__Class** type_info;
        inline app::RunWorkerCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::RunWorkerCompletedEventHandler__Class>(type_info, "System.ComponentModel", "RunWorkerCompletedEventHandler");
        }
        inline app::RunWorkerCompletedEventHandler* create() {
            return il2cpp::create_object<app::RunWorkerCompletedEventHandler>(get_class());
        }
    } // namespace RunWorkerCompletedEventHandler
} // namespace app::classes::types
