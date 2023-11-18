#pragma once
#include <Modloader/app/structs/SafePipeHandle.h>
#include <Modloader/app/structs/SafePipeHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafePipeHandle {
        inline app::SafePipeHandle__Class** type_info() {
            static app::SafePipeHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SafePipeHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SafePipeHandle__Class* get_class() {
            return il2cpp::get_class<app::SafePipeHandle__Class>(type_info(), "Microsoft.Win32.SafeHandles", "SafePipeHandle");
        }
        inline app::SafePipeHandle* create() {
            return il2cpp::create_object<app::SafePipeHandle>(get_class());
        }
    } // namespace SafePipeHandle
} // namespace app::classes::types
