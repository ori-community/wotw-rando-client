#pragma once
#include <Modloader/app/structs/ProcessWaitHandle.h>
#include <Modloader/app/structs/ProcessWaitHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProcessWaitHandle {
        inline app::ProcessWaitHandle__Class** type_info() {
            static app::ProcessWaitHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProcessWaitHandle__Class**)(modloader::win::memory::resolve_rva(0x04740780));
            }
            return cache;
        }
        inline app::ProcessWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::ProcessWaitHandle__Class>(type_info(), "System.Diagnostics", "ProcessWaitHandle");
        }
        inline app::ProcessWaitHandle* create() {
            return il2cpp::create_object<app::ProcessWaitHandle>(get_class());
        }
    } // namespace ProcessWaitHandle
} // namespace app::classes::types
