#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeFileHandle {
        inline app::SafeFileHandle__Class** type_info = (app::SafeFileHandle__Class**)(modloader::win::memory::resolve_rva(0x0473C1C8));
        inline app::SafeFileHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeFileHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeFileHandle");
        }
        inline app::SafeFileHandle* create() {
            return il2cpp::create_object<app::SafeFileHandle>(get_class());
        }
    } // namespace SafeFileHandle
} // namespace app::classes::types
