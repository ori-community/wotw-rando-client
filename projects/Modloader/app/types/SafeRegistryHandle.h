#pragma once
#include <Modloader/app/structs/SafeRegistryHandle.h>
#include <Modloader/app/structs/SafeRegistryHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeRegistryHandle {
        inline app::SafeRegistryHandle__Class** type_info() {
            static app::SafeRegistryHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeRegistryHandle__Class**)(modloader::win::memory::resolve_rva(0x0477B898));
            }
            return cache;
        }
        inline app::SafeRegistryHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeRegistryHandle__Class>(type_info(), "Microsoft.Win32.SafeHandles", "SafeRegistryHandle");
        }
        inline app::SafeRegistryHandle* create() {
            return il2cpp::create_object<app::SafeRegistryHandle>(get_class());
        }
    } // namespace SafeRegistryHandle
} // namespace app::classes::types
