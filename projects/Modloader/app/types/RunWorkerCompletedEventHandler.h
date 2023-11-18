#pragma once
#include <Modloader/app/structs/RunWorkerCompletedEventHandler.h>
#include <Modloader/app/structs/RunWorkerCompletedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RunWorkerCompletedEventHandler {
        inline app::RunWorkerCompletedEventHandler__Class** type_info() {
            static app::RunWorkerCompletedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RunWorkerCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0473E2F8));
            }
            return cache;
        }
        inline app::RunWorkerCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::RunWorkerCompletedEventHandler__Class>(type_info(), "System.ComponentModel", "RunWorkerCompletedEventHandler");
        }
        inline app::RunWorkerCompletedEventHandler* create() {
            return il2cpp::create_object<app::RunWorkerCompletedEventHandler>(get_class());
        }
    } // namespace RunWorkerCompletedEventHandler
} // namespace app::classes::types
