#pragma once
#include <Modloader/app/structs/SafeFileHandle.h>
#include <Modloader/app/structs/SafeFileHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeFileHandle {
        inline app::SafeFileHandle__Class** type_info() {
            static app::SafeFileHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeFileHandle__Class**)(modloader::win::memory::resolve_rva(0x0473C1C8));
            }
            return cache;
        }
        inline app::SafeFileHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeFileHandle__Class>(type_info(), "Microsoft.Win32.SafeHandles", "SafeFileHandle");
        }
        inline app::SafeFileHandle* create() {
            return il2cpp::create_object<app::SafeFileHandle>(get_class());
        }
    } // namespace SafeFileHandle
} // namespace app::classes::types
