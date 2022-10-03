#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeWaitHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeWaitHandle__Class** type_info;
        inline app::SafeWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeWaitHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeWaitHandle");
        }
        inline app::SafeWaitHandle* create() {
            return il2cpp::create_object<app::SafeWaitHandle>(get_class());
        }
    } // namespace SafeWaitHandle
} // namespace app::classes::types
