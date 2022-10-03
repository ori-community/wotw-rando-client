#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BackgroundWorker_WorkerThreadStartDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BackgroundWorker_WorkerThreadStartDelegate__Class** type_info;
        inline app::BackgroundWorker_WorkerThreadStartDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::BackgroundWorker_WorkerThreadStartDelegate__Class>(type_info, "System.ComponentModel", "BackgroundWorker", "WorkerThreadStartDelegate");
        }
        inline app::BackgroundWorker_WorkerThreadStartDelegate* create() {
            return il2cpp::create_object<app::BackgroundWorker_WorkerThreadStartDelegate>(get_class());
        }
    } // namespace BackgroundWorker_WorkerThreadStartDelegate
} // namespace app::classes::types
