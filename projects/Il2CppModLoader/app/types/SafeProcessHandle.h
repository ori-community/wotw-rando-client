#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeProcessHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeProcessHandle__Class** type_info;
        inline app::SafeProcessHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeProcessHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeProcessHandle");
        }
        inline app::SafeProcessHandle* create() {
            return il2cpp::create_object<app::SafeProcessHandle>(get_class());
        }
    } // namespace SafeProcessHandle
} // namespace app::classes::types
