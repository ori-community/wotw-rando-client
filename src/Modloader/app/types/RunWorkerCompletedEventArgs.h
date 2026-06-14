#pragma once
#include <Modloader/app/structs/RunWorkerCompletedEventArgs.h>
#include <Modloader/app/structs/RunWorkerCompletedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RunWorkerCompletedEventArgs {
        inline app::RunWorkerCompletedEventArgs__Class** type_info() {
            static app::RunWorkerCompletedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RunWorkerCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0474AE08));
            }
            return cache;
        }
        inline app::RunWorkerCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::RunWorkerCompletedEventArgs__Class>(type_info(), "System.ComponentModel", "RunWorkerCompletedEventArgs");
        }
        inline app::RunWorkerCompletedEventArgs* create() {
            return il2cpp::create_object<app::RunWorkerCompletedEventArgs>(get_class());
        }
    } // namespace RunWorkerCompletedEventArgs
} // namespace app::classes::types
