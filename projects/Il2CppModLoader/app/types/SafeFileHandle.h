#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeFileHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeFileHandle__Class** type_info;
        inline app::SafeFileHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeFileHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeFileHandle");
        }
        inline app::SafeFileHandle* create() {
            return il2cpp::create_object<app::SafeFileHandle>(get_class());
        }
    } // namespace SafeFileHandle
} // namespace app::classes::types
