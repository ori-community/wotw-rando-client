#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BackgroundWorker {
        inline app::BackgroundWorker__Class** type_info = (app::BackgroundWorker__Class**)(modloader::win::memory::resolve_rva(0x04752170));
        inline app::BackgroundWorker__Class* get_class() {
            return il2cpp::get_class<app::BackgroundWorker__Class>(type_info, "System.ComponentModel", "BackgroundWorker");
        }
        inline app::BackgroundWorker* create() {
            return il2cpp::create_object<app::BackgroundWorker>(get_class());
        }
    } // namespace BackgroundWorker
} // namespace app::classes::types
