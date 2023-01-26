#pragma once
#include <Modloader/app/structs/SafeHandle.h>
#include <Modloader/app/structs/SafeHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeHandle {
        inline app::SafeHandle__Class** type_info() {
            static app::SafeHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeHandle__Class**)(modloader::win::memory::resolve_rva(0x04793570));
            }
            return cache;
        }
        inline app::SafeHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeHandle__Class>(type_info(), "System.Runtime.InteropServices", "SafeHandle");
        }
        inline app::SafeHandle* create() {
            return il2cpp::create_object<app::SafeHandle>(get_class());
        }
    } // namespace SafeHandle
} // namespace app::classes::types
