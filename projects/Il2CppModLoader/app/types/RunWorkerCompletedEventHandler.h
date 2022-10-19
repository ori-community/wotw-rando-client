#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RunWorkerCompletedEventHandler {
        inline app::RunWorkerCompletedEventHandler__Class** type_info = (app::RunWorkerCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0473E2F8));
        inline app::RunWorkerCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::RunWorkerCompletedEventHandler__Class>(type_info, "System.ComponentModel", "RunWorkerCompletedEventHandler");
        }
        inline app::RunWorkerCompletedEventHandler* create() {
            return il2cpp::create_object<app::RunWorkerCompletedEventHandler>(get_class());
        }
    } // namespace RunWorkerCompletedEventHandler
} // namespace app::classes::types
