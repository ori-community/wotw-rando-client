#pragma once
#include <Modloader/app/structs/RegisteredWaitHandle.h>
#include <Modloader/app/structs/RegisteredWaitHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegisteredWaitHandle {
        inline app::RegisteredWaitHandle__Class** type_info() {
            static app::RegisteredWaitHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegisteredWaitHandle__Class**)(modloader::win::memory::resolve_rva(0x0477AE20));
            }
            return cache;
        }
        inline app::RegisteredWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::RegisteredWaitHandle__Class>(type_info(), "System.Threading", "RegisteredWaitHandle");
        }
        inline app::RegisteredWaitHandle* create() {
            return il2cpp::create_object<app::RegisteredWaitHandle>(get_class());
        }
    } // namespace RegisteredWaitHandle
} // namespace app::classes::types
