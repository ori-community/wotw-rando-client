#pragma once
#include <Modloader/app/structs/BackgroundWorker_WorkerThreadStartDelegate.h>
#include <Modloader/app/structs/BackgroundWorker_WorkerThreadStartDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BackgroundWorker_WorkerThreadStartDelegate {
        inline app::BackgroundWorker_WorkerThreadStartDelegate__Class** type_info() {
            static app::BackgroundWorker_WorkerThreadStartDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BackgroundWorker_WorkerThreadStartDelegate__Class**)(modloader::win::memory::resolve_rva(0x0473FE80));
            }
            return cache;
        }
        inline app::BackgroundWorker_WorkerThreadStartDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::BackgroundWorker_WorkerThreadStartDelegate__Class>(type_info(), "System.ComponentModel", "BackgroundWorker", "WorkerThreadStartDelegate");
        }
        inline app::BackgroundWorker_WorkerThreadStartDelegate* create() {
            return il2cpp::create_object<app::BackgroundWorker_WorkerThreadStartDelegate>(get_class());
        }
    } // namespace BackgroundWorker_WorkerThreadStartDelegate
} // namespace app::classes::types
