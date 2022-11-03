#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeRegistryHandle {
        inline app::SafeRegistryHandle__Class** type_info = (app::SafeRegistryHandle__Class**)(modloader::win::memory::resolve_rva(0x0477B898));
        inline app::SafeRegistryHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeRegistryHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeRegistryHandle");
        }
        inline app::SafeRegistryHandle* create() {
            return il2cpp::create_object<app::SafeRegistryHandle>(get_class());
        }
    } // namespace SafeRegistryHandle
} // namespace app::classes::types
