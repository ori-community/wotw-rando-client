#pragma once
#include <Modloader/app/structs/SafeProcessHandle.h>
#include <Modloader/app/structs/SafeProcessHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeProcessHandle {
        inline app::SafeProcessHandle__Class** type_info() {
            static app::SafeProcessHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeProcessHandle__Class**)(modloader::win::memory::resolve_rva(0x0475C8A0));
            }
            return cache;
        }
        inline app::SafeProcessHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeProcessHandle__Class>(type_info(), "Microsoft.Win32.SafeHandles", "SafeProcessHandle");
        }
        inline app::SafeProcessHandle* create() {
            return il2cpp::create_object<app::SafeProcessHandle>(get_class());
        }
    } // namespace SafeProcessHandle
} // namespace app::classes::types
