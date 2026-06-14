#pragma once
#include <Modloader/app/structs/SafeWaitHandle.h>
#include <Modloader/app/structs/SafeWaitHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeWaitHandle {
        inline app::SafeWaitHandle__Class** type_info() {
            static app::SafeWaitHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeWaitHandle__Class**)(modloader::win::memory::resolve_rva(0x0471F378));
            }
            return cache;
        }
        inline app::SafeWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeWaitHandle__Class>(type_info(), "Microsoft.Win32.SafeHandles", "SafeWaitHandle");
        }
        inline app::SafeWaitHandle* create() {
            return il2cpp::create_object<app::SafeWaitHandle>(get_class());
        }
    } // namespace SafeWaitHandle
} // namespace app::classes::types
