#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeWaitHandle {
        inline app::SafeWaitHandle__Class** type_info = (app::SafeWaitHandle__Class**)(modloader::win::memory::resolve_rva(0x0471F378));
        inline app::SafeWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeWaitHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeWaitHandle");
        }
        inline app::SafeWaitHandle* create() {
            return il2cpp::create_object<app::SafeWaitHandle>(get_class());
        }
    } // namespace SafeWaitHandle
} // namespace app::classes::types
