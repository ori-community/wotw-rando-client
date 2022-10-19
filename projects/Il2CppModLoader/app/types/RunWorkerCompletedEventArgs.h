#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RunWorkerCompletedEventArgs {
        inline app::RunWorkerCompletedEventArgs__Class** type_info = (app::RunWorkerCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0474AE08));
        inline app::RunWorkerCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::RunWorkerCompletedEventArgs__Class>(type_info, "System.ComponentModel", "RunWorkerCompletedEventArgs");
        }
        inline app::RunWorkerCompletedEventArgs* create() {
            return il2cpp::create_object<app::RunWorkerCompletedEventArgs>(get_class());
        }
    } // namespace RunWorkerCompletedEventArgs
} // namespace app::classes::types
