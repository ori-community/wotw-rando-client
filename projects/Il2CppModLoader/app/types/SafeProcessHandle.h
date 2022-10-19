#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeProcessHandle {
        inline app::SafeProcessHandle__Class** type_info = (app::SafeProcessHandle__Class**)(modloader::win::memory::resolve_rva(0x0475C8A0));
        inline app::SafeProcessHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeProcessHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeProcessHandle");
        }
        inline app::SafeProcessHandle* create() {
            return il2cpp::create_object<app::SafeProcessHandle>(get_class());
        }
    } // namespace SafeProcessHandle
} // namespace app::classes::types
